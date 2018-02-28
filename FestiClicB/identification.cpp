#include "identification.h"
#include "ui_identification.h"
#include <QString>
#include "accueil.h"


Identification::Identification(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Identification)
{
    ui->setupUi(this);

    if(openConnexion())
        {
            ui->iLabEtat->setText("Connexion...");
        }
        else
        {
            ui->iLabEtat->setAcceptDrops("Connexion a ouvrir");
        }
}

bool Identification::openConnexion()
{
    maBaseDeDonnee=QSqlDatabase::addDatabase("QSQLITE");
    maBaseDeDonnee.setDatabaseName("Z:/Projet C++/Codes/Fclic/database.db");

    if(maBaseDeDonnee.open())
    {
        qDebug()<<("Connexion...");
        return true;
    }
    else
    {
        qDebug()<<("Connexion a ouvrir");
        return false;
    }
}

void Identification::closeConnexion()
{
    maBaseDeDonnee.close();
    maBaseDeDonnee.removeDatabase(QSqlDatabase::defaultConnection);
}


Identification::~Identification()
{
    delete ui;
}

void Identification::on_iBtnSeConnecter_clicked()
{
    QString nomUtilisateur;
    QString motDePasse;

    nomUtilisateur=ui->iLEditNomUtilisateur->text();
    motDePasse=ui->iLEditMotDePasse->text();

    if(!openConnexion())
    {
        qDebug()<<"Connexion vers la bdd est fermée";
        return;
    }

    openConnexion();

    QSqlQuery query;
    query.prepare("SELECT * FROM Utilisateurs WHERE Username='"+nomUtilisateur +"' AND Password='"+motDePasse +"'");

    if(query.exec())
    {
        int compteur = 0;
        while(query.next())
        {
            compteur++;
        }
        if(compteur==1)
        {
            ui->iLabEtat->setText("Acces accepté");

            closeConnexion(); //fermeture de la connexion bdd

            //Ouverture de la fenêtre suivante
            this->hide();
            Accueil accueil;
            accueil.setModal(true);
            accueil.exec();
        }
        else
        {
            ui->iLabEtat->setText("Le nom d'tilisateur ou le mot de passe est erroné");
        }
    }
}

void Identification::on_iBtnAnnuler_clicked()
{
    this->close();
}
