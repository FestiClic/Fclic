#include "accueil.h"
#include "ui_accueil.h"

#include "identification.h"

Accueil::Accueil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Accueil)
{
    ui->setupUi(this);

    Identification connexion;
    //test de connexion de bdd sur la seconde fenêtre
    if(connexion.openConnexion())
    {
        ui->aLabEtat->setText("Connexion ...");
    }
    else
    {
        ui->aLabEtat->setAcceptDrops("Connexion a ouvrir");
    }
}

Accueil::~Accueil()
{
    delete ui;
}
