/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *aLabEtat;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *aLEditIdUtilisateur;
    QLineEdit *aLEditNom;
    QLineEdit *aLEditPrenom;
    QLineEdit *aLEditUsername;
    QLineEdit *aLEditPassword;
    QPushButton *aBtnEnregistrerUtilisateur;
    QPushButton *aBtnMAJUtilisateur;
    QPushButton *aBtnSupprimUtilisateur;
    QWidget *tab_2;

    void setupUi(QDialog *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QStringLiteral("Accueil"));
        Accueil->resize(1040, 756);
        tabWidget = new QTabWidget(Accueil);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 991, 711));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        aLabEtat = new QLabel(tab);
        aLabEtat->setObjectName(QStringLiteral("aLabEtat"));
        aLabEtat->setGeometry(QRect(330, 640, 381, 16));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 70, 421, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        aLEditIdUtilisateur = new QLineEdit(verticalLayoutWidget);
        aLEditIdUtilisateur->setObjectName(QStringLiteral("aLEditIdUtilisateur"));

        verticalLayout->addWidget(aLEditIdUtilisateur);

        aLEditNom = new QLineEdit(verticalLayoutWidget);
        aLEditNom->setObjectName(QStringLiteral("aLEditNom"));

        verticalLayout->addWidget(aLEditNom);

        aLEditPrenom = new QLineEdit(verticalLayoutWidget);
        aLEditPrenom->setObjectName(QStringLiteral("aLEditPrenom"));

        verticalLayout->addWidget(aLEditPrenom);

        aLEditUsername = new QLineEdit(verticalLayoutWidget);
        aLEditUsername->setObjectName(QStringLiteral("aLEditUsername"));

        verticalLayout->addWidget(aLEditUsername);

        aLEditPassword = new QLineEdit(verticalLayoutWidget);
        aLEditPassword->setObjectName(QStringLiteral("aLEditPassword"));

        verticalLayout->addWidget(aLEditPassword);

        aBtnEnregistrerUtilisateur = new QPushButton(tab);
        aBtnEnregistrerUtilisateur->setObjectName(QStringLiteral("aBtnEnregistrerUtilisateur"));
        aBtnEnregistrerUtilisateur->setGeometry(QRect(270, 320, 181, 23));
        aBtnMAJUtilisateur = new QPushButton(tab);
        aBtnMAJUtilisateur->setObjectName(QStringLiteral("aBtnMAJUtilisateur"));
        aBtnMAJUtilisateur->setGeometry(QRect(460, 320, 181, 23));
        aBtnSupprimUtilisateur = new QPushButton(tab);
        aBtnSupprimUtilisateur->setObjectName(QStringLiteral("aBtnSupprimUtilisateur"));
        aBtnSupprimUtilisateur->setGeometry(QRect(370, 350, 171, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QDialog *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "Dialog", nullptr));
        aLabEtat->setText(QApplication::translate("Accueil", "Etat connexion", nullptr));
        aLEditIdUtilisateur->setPlaceholderText(QApplication::translate("Accueil", "Id utilisateur", nullptr));
        aLEditNom->setPlaceholderText(QApplication::translate("Accueil", "Nom", nullptr));
        aLEditPrenom->setPlaceholderText(QApplication::translate("Accueil", "Prenom", nullptr));
        aLEditUsername->setPlaceholderText(QApplication::translate("Accueil", "Username", nullptr));
        aLEditPassword->setPlaceholderText(QApplication::translate("Accueil", "Password", nullptr));
        aBtnEnregistrerUtilisateur->setText(QApplication::translate("Accueil", "Enregistrer nouveau tilisateur", nullptr));
        aBtnMAJUtilisateur->setText(QApplication::translate("Accueil", "MAJ Utilisateur", nullptr));
        aBtnSupprimUtilisateur->setText(QApplication::translate("Accueil", "Supprimer utilisateur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Accueil", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Accueil", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
