/********************************************************************************
** Form generated from reading UI file 'identification.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTIFICATION_H
#define UI_IDENTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Identification
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *iLEditNomUtilisateur;
    QLineEdit *iLEditMotDePasse;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *iBtnSeConnecter;
    QPushButton *iBtnAnnuler;
    QLabel *iLabEtat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Identification)
    {
        if (Identification->objectName().isEmpty())
            Identification->setObjectName(QStringLiteral("Identification"));
        Identification->resize(1031, 764);
        centralWidget = new QWidget(Identification);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 991, 691));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(350, 310, 291, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        iLEditNomUtilisateur = new QLineEdit(verticalLayoutWidget);
        iLEditNomUtilisateur->setObjectName(QStringLiteral("iLEditNomUtilisateur"));

        verticalLayout->addWidget(iLEditNomUtilisateur);

        iLEditMotDePasse = new QLineEdit(verticalLayoutWidget);
        iLEditMotDePasse->setObjectName(QStringLiteral("iLEditMotDePasse"));

        verticalLayout->addWidget(iLEditMotDePasse);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(350, 430, 291, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        iBtnSeConnecter = new QPushButton(horizontalLayoutWidget);
        iBtnSeConnecter->setObjectName(QStringLiteral("iBtnSeConnecter"));

        horizontalLayout->addWidget(iBtnSeConnecter);

        iBtnAnnuler = new QPushButton(horizontalLayoutWidget);
        iBtnAnnuler->setObjectName(QStringLiteral("iBtnAnnuler"));

        horizontalLayout->addWidget(iBtnAnnuler);

        iLabEtat = new QLabel(groupBox);
        iLabEtat->setObjectName(QStringLiteral("iLabEtat"));
        iLabEtat->setGeometry(QRect(350, 530, 291, 16));
        Identification->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Identification);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1031, 21));
        Identification->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Identification);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Identification->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Identification);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Identification->setStatusBar(statusBar);

        retranslateUi(Identification);

        QMetaObject::connectSlotsByName(Identification);
    } // setupUi

    void retranslateUi(QMainWindow *Identification)
    {
        Identification->setWindowTitle(QApplication::translate("Identification", "Identification", nullptr));
        groupBox->setTitle(QApplication::translate("Identification", "GroupBox", nullptr));
        iLEditNomUtilisateur->setPlaceholderText(QApplication::translate("Identification", "Nom d'utilisateur", nullptr));
        iLEditMotDePasse->setPlaceholderText(QApplication::translate("Identification", "Mot de passe", nullptr));
        iBtnSeConnecter->setText(QApplication::translate("Identification", "Se connecter", nullptr));
        iBtnAnnuler->setText(QApplication::translate("Identification", "Annuler", nullptr));
        iLabEtat->setText(QApplication::translate("Identification", "Etat de la connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Identification: public Ui_Identification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDENTIFICATION_H
