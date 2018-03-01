#include "accueil.h"
#include "ui_accueil.h"
#include <QMessageBox>
#include <qmenubar.h>

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

void Accueil::on_aBtnEnregistrerUtilisateur_clicked()
{
    //Au clic j'enregistre des information dans la table Utilisateurs + l'execussion de la requete

        Identification connexion; //création nouvel objet avec la classe identification

        QString nomUtilisateur;
        QString prenomUtilisateur;
        QString username;
        QString password;

        nomUtilisateur=ui->aLEditNom->text();
        prenomUtilisateur=ui->aLEditPrenom->text();
        username=ui->aLEditUsername->text();
        password=ui->aLEditPassword->text();

        if(!connexion.openConnexion())
        {
            qDebug()<<"Connexion vers la bdd est fermée";
            return;
        }

        connexion.openConnexion();

        QSqlQuery query;
        query.prepare("INSERT INTO Utilisateurs (NomUtilisateur, PrenomUtilisateur, Username, Password) "
                      "VALUES ('"+nomUtilisateur+"','"+prenomUtilisateur+"','"+username+"','"+password+"')");	//requete insertion dans la bdd

        if(query.exec())
        {
           //Afficher l'info si la requete a été executé ou pas dans un messageBox
           //si ma requete est execté elle doit afficher le message suivant
           QMessageBox::information(this,tr("Sauvegarde"), tr("Sauvegardé")); 	//(Sauvegarde) est le titre de le msgBox - (Sauvegardé) est le message affiché dans le msgBox
           connexion.closeConnexion();  //Fermeture de la connexion
        }
        else
        {
            //en cas de non execution de la requete
            QMessageBox::critical(this,tr("Erreur:"),query.lastError().text());	//msgBox avec comme titre erreur et le text de l'erreur generé par la requete

        }

}

void Accueil::on_aBtnMAJUtilisateur_clicked()
{
    Identification connexion; //création nouvel objet avec la classe identification

    QString nomUtilisateur;
    QString prenomUtilisateur;
    QString idUtilisateur;

    idUtilisateur=ui->aLEditIdUtilisateur->text();
    nomUtilisateur=ui->aLEditNom->text();
    prenomUtilisateur=ui->aLEditPrenom->text();

    if(!connexion.openConnexion())
    {
        qDebug() << "Erreur: connexion fermée";
        return;
    }

    connexion.openConnexion();

    QSqlQuery query;
    //requete modification dans la bdd
    //==> si utilisation d'un id AI utiliser à la fin de la requete WHERE IdUtilisateur='"+IdUtilisateur+"'
    query.prepare("UPDATE Utilisateurs SET "
                  "NomUtilisateur='"+nomUtilisateur+"',PrenomUtilisateur='"+prenomUtilisateur+"'"
                  "WHERE IdUtilisateur='"+idUtilisateur+"'");

    if(query.exec())
    {
        //Afficher l'info si la requete a été executé ou pas dans un messageBox
        //si ma requete est execté elle doit afficher le message suivant

        QMessageBox::critical(this, tr("Modification"), tr("Enregistrement modifié"));
        connexion.closeConnexion(); //fermeture de la connexion
    }
    else
    {
        //en cas de non execution de la requete
                QMessageBox::critical(this,tr("Erreur:"),query.lastError().text());	//msgBox avec comme titre erreur et le text de l'erreur generé par la requete
    }
}



void Accueil::on_aBtnSupprimUtilisateur_clicked()
{
    Identification connexion;
    //Utiliser le nom pour supprimer l'enregistrement
    QString nomUtilisateur;

    nomUtilisateur=ui->aLEditNom->text();

    if(!connexion.openConnexion())
    {
        qDebug() << "Echec de connexion";
        return;
    }

    connexion.openConnexion();

    QSqlQuery query;
    query.prepare("DELETE FROM Utilisateurs WHERE NomUtilisateur='"+nomUtilisateur+"'"); //requete suppression dans la bdd ==> ici en fonction du nom

    if(query.exec())
    {
        //Afficher l'info si la requete a été executé ou pas dans un messageBox
        //si ma requete est execté elle doit afficher le message suivant
        QMessageBox::information(this,tr("Suppression"), tr("Enregistrement supprimé")); 	//(Suppression) est le titre de le msgBox - (Enregistrement supprimé) est le message affiché dans le msgBox
        connexion.closeConnexion();  //Fermeture de la connexion
    }
    else
    {
        //en cas de non execution de la requete
        QMessageBox::warning(this,tr("Erreur:"),query.lastError().text());	//msgBox avec comme titre erreur et le text de l'erreur generé par la requete

    }
}

/*
void Accueil::Accueil()
{
    QMenu *menuFichier = menuBar()->addMenu("&Fichier");
    QMenu *menuEdition = menuBar()->addMenu("&Edition");
    QMenu *menuAffichage = menuBar()->addMenu("&Affichage");
}

*/
