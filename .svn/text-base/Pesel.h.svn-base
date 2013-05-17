#ifndef PESEL_H
#define PESEL_H

#include <QtGui/QWidget>
#include <QDebug>
#include <QClipboard>
#include <time.h>
#include "ui_Pesel.h"



class Pesel : public QWidget
{
    Q_OBJECT

public:
    Pesel(QWidget *parent = 0);
    ~Pesel();
public slots:
    void losuj();
    void generuj();

private:
    Ui::PeselClass ui;
    int losuj(int min, int range);
};

#endif // PESEL_H
