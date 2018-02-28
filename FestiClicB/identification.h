#ifndef IDENTIFICATION_H
#define IDENTIFICATION_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "accueil.h"


namespace Ui {
class Identification;
}

class Identification : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase maBaseDeDonnee;

    //ouverture de la connexion bdd
    bool openConnexion();

    //fermeture de la connexion bdd
    void closeConnexion();

    explicit Identification(QWidget *parent = 0);
    ~Identification();

private slots:
    void on_iBtnSeConnecter_clicked();

    void on_iBtnAnnuler_clicked();

private:
    Ui::Identification *ui;
};

#endif // IDENTIFICATION_H
