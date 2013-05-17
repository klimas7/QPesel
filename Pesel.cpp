#include "Pesel.h"

Pesel::Pesel(QWidget *parent)
    : QWidget(parent)
{
	srand(time(NULL));
	ui.setupUi(this);
	connect(ui.btnLosuj, 		SIGNAL(clicked()), this, SLOT(losuj()));
	connect(ui.btnGeneruj, 	SIGNAL(clicked()), this, SLOT(generuj()));
}

Pesel::~Pesel()
{

}

void Pesel::losuj()
{
	int miesiaceL[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//Losujemy rok
	if (ui.cbRok->isChecked())
		ui.sbRok->setValue(losuj(1950,60));

	if (ui.cbMsc->isChecked())
		ui.sbMsc->setValue(losuj(1,12));

	if (ui.cbDzien->isChecked())
		ui.sbDzien->setValue(losuj(1,miesiaceL[ui.sbMsc->value()-1]));

	if (ui.cbPlec->isChecked())
		ui.comboPlec->setCurrentIndex(losuj(0,2));

}

void Pesel::generuj()
{
	int lvK[5] = {0,2,4,6,8};
	int lvM[5] = {1,3,5,7,9};
	int lvHash[10] = {1,3,7,9,1,3,7,9,1,3};
	QString lvPesel = "";
	int rok 	= ui.sbRok->value();
	int msc 	= ui.sbMsc->value();
	int dzien = ui.sbDzien->value();
	int ran 	= losuj(0,999);
	int plec	= ui.comboPlec->currentIndex();

	QString rokS = QString::number(rok);
	rokS = rokS.right(2);

	if (rok >= 2000) msc+=20;
	QString mscS = QString::number(msc);
	if (msc<10) mscS = "0"+mscS;

	QString dzienS = QString::number(dzien);
	if (dzien<10) dzienS = "0"+dzienS;

	QString ranS = QString::number(ran);
	if (ran<10) ranS = "0"+ranS;
	if (ran<100) ranS = "0"+ranS;

	int plecIndex = losuj(0,5);
	QString plecS = QString::number(lvK[plecIndex]);
	if (plec == 1)
		plecS = QString::number(lvM[plecIndex]);

	lvPesel = rokS+mscS+dzienS+ranS+plecS;
	int suma = 0;
	for (int i=0; i<lvPesel.size();i++)
		suma += lvPesel.at(i).digitValue()*lvHash[i];

	QString lastS = QString::number(10-suma%10);
	if (lastS == "10") lastS = "0";
	lvPesel += lastS;
	ui.tfPesel->setText(lvPesel);

	 QClipboard *clipboard = QApplication::clipboard();
	 clipboard->setText(lvPesel);
}

int Pesel::losuj(int min, int range)
{
	int ret = rand()%range;
	return ret + min;
}
