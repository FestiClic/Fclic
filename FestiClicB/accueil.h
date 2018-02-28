#ifndef ACCUEIL_H
#define ACCUEIL_H

#include "identification.h"

#include <QDialog>

namespace Ui {
class Accueil;
}

class Accueil : public QDialog
{
    Q_OBJECT

public:

    explicit Accueil(QWidget *parent = 0);
    ~Accueil();

private:
    Ui::Accueil *ui;
};

#endif // ACCUEIL_H
