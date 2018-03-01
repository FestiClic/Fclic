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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
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
    QTableView *a2TabView;
    QPushButton *a2BtnAfficher;
    QComboBox *a2CBox;
    QWidget *tab_3;
    QWidget *tab_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QStringLiteral("Accueil"));
        Accueil->resize(1040, 756);
        tabWidget = new QTabWidget(Accueil);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(310, 20, 701, 711));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
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
        a2TabView = new QTableView(tab_2);
        a2TabView->setObjectName(QStringLiteral("a2TabView"));
        a2TabView->setGeometry(QRect(30, 170, 661, 471));
        a2BtnAfficher = new QPushButton(tab_2);
        a2BtnAfficher->setObjectName(QStringLiteral("a2BtnAfficher"));
        a2BtnAfficher->setGeometry(QRect(40, 90, 75, 23));
        a2CBox = new QComboBox(tab_2);
        a2CBox->setObjectName(QStringLiteral("a2CBox"));
        a2CBox->setGeometry(QRect(40, 30, 261, 22));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        pushButton = new QPushButton(Accueil);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 301, 151));
        pushButton_2 = new QPushButton(Accueil);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 150, 301, 151));
        pushButton_3 = new QPushButton(Accueil);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 300, 301, 151));
        pushButton_4 = new QPushButton(Accueil);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 450, 301, 151));
        pushButton_5 = new QPushButton(Accueil);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 600, 301, 151));

        retranslateUi(Accueil);

        tabWidget->setCurrentIndex(0);


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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Accueil", "Operateur", nullptr));
        a2BtnAfficher->setText(QApplication::translate("Accueil", "Afficher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Accueil", "Liste utilisateur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Accueil", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Accueil", "Page", nullptr));
        pushButton->setText(QApplication::translate("Accueil", "G\303\251rer les clients ", nullptr));
        pushButton_2->setText(QApplication::translate("Accueil", "G\303\251rer les salle ", nullptr));
        pushButton_3->setText(QApplication::translate("Accueil", "G\303\251rer les spectacles ", nullptr));
        pushButton_4->setText(QApplication::translate("Accueil", "Consulter les statistiques", nullptr));
        pushButton_5->setText(QApplication::translate("Accueil", "Consulter les statistiques", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
