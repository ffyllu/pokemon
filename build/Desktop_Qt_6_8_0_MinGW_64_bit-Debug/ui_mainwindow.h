/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_combat;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *HPEnnemi;
    QLabel *PokemonEnnemi;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *PokemonJoueur;
    QProgressBar *HPJoueur;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTexte;
    QGridLayout *gridLayout;
    QPushButton *btnAtk4;
    QPushButton *btnAtk1;
    QPushButton *btnAtk3;
    QPushButton *btnAtk2;
    QPushButton *btnChange;
    QWidget *page_equipe;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitre;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QToolButton *btnPoke1;
    QToolButton *btnPoke2;
    QToolButton *btnPoke3;
    QToolButton *btnPoke4;
    QToolButton *btnPoke5;
    QToolButton *btnPoke6;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btnRetour;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1440, 810);
        MainWindow->setMinimumSize(QSize(1440, 810));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(150, 150));
        stackedWidget->setStyleSheet(QString::fromUtf8("#page_equipe {\n"
"    background-color: #2c3e50;\n"
"}"));
        page_combat = new QWidget();
        page_combat->setObjectName("page_combat");
        page_combat->setStyleSheet(QString::fromUtf8("#page_combat {\n"
"    border-image: url(:/assets/arene2.png) 0 0 0 0 stretch stretch;\n"
"}"));
        verticalLayout = new QVBoxLayout(page_combat);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 200, 500, -1);
        HPEnnemi = new QProgressBar(page_combat);
        HPEnnemi->setObjectName("HPEnnemi");
        HPEnnemi->setMaximumSize(QSize(118, 23));
        HPEnnemi->setStyleSheet(QString::fromUtf8("/* 1. L'apparence g\303\251n\303\251rale de la barre (le conteneur) */\n"
"QProgressBar {\n"
"    border: 3px solid #333333;   /* Bordure \303\251paisse et tr\303\250s sombre */\n"
"    border-radius: 0px;          /* Coins carr\303\251s, pas d'arrondi */\n"
"    background-color: #555555;   /* Fond gris fonc\303\251 (quand la vie est vide) */\n"
"    text-align: center;          /* Texte au milieu */\n"
"    color: white;                /* Texte blanc pour le contraste */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* 2. L'apparence de la partie remplie (la vie) */\n"
"QProgressBar::chunk {\n"
"    background-color: #32CD32;   /* Un beau vert \"Lime Green\" */\n"
"    /* On a supprim\303\251 'width' et 'margin' pour avoir une barre continue */\n"
"}"));
        HPEnnemi->setValue(50);
        HPEnnemi->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(HPEnnemi, 0, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);

        PokemonEnnemi = new QLabel(page_combat);
        PokemonEnnemi->setObjectName("PokemonEnnemi");
        PokemonEnnemi->setMinimumSize(QSize(251, 251));
        PokemonEnnemi->setMaximumSize(QSize(251, 251));
        PokemonEnnemi->setPixmap(QPixmap(QString::fromUtf8(":/assets/salameche_f.png")));
        PokemonEnnemi->setScaledContents(true);

        horizontalLayout_3->addWidget(PokemonEnnemi);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(300, -1, -1, -1);
        PokemonJoueur = new QLabel(page_combat);
        PokemonJoueur->setObjectName("PokemonJoueur");
        PokemonJoueur->setMinimumSize(QSize(251, 251));
        PokemonJoueur->setMaximumSize(QSize(251, 251));
        PokemonJoueur->setPixmap(QPixmap(QString::fromUtf8(":/assets/bulbizarre_d.png")));
        PokemonJoueur->setScaledContents(true);

        horizontalLayout_4->addWidget(PokemonJoueur);

        HPJoueur = new QProgressBar(page_combat);
        HPJoueur->setObjectName("HPJoueur");
        HPJoueur->setMaximumSize(QSize(118, 23));
        HPJoueur->setStyleSheet(QString::fromUtf8("/* 1. L'apparence g\303\251n\303\251rale de la barre (le conteneur) */\n"
"QProgressBar {\n"
"    border: 3px solid #333333;   /* Bordure \303\251paisse et tr\303\250s sombre */\n"
"    border-radius: 0px;          /* Coins carr\303\251s, pas d'arrondi */\n"
"    background-color: #555555;   /* Fond gris fonc\303\251 (quand la vie est vide) */\n"
"    text-align: center;          /* Texte au milieu */\n"
"    color: white;                /* Texte blanc pour le contraste */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* 2. L'apparence de la partie remplie (la vie) */\n"
"QProgressBar::chunk {\n"
"    background-color: #32CD32;   /* Un beau vert \"Lime Green\" */\n"
"    /* On a supprim\303\251 'width' et 'margin' pour avoir une barre continue */\n"
"}"));
        HPJoueur->setValue(50);
        HPJoueur->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        HPJoueur->setTextVisible(true);

        horizontalLayout_4->addWidget(HPJoueur, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        labelTexte = new QLabel(page_combat);
        labelTexte->setObjectName("labelTexte");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelTexte->sizePolicy().hasHeightForWidth());
        labelTexte->setSizePolicy(sizePolicy);
        labelTexte->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: white;      /* Fond blanc */\n"
"    border: 4px solid #333333;    /* Grosse bordure gris fonc\303\251 */\n"
"    border-radius: 5px;           /* Coins un peu arrondis */\n"
"    padding: 5px;                 /* Espace autour du texte */\n"
"    font-size: 14px;              /* Texte assez gros */\n"
"    font-weight: bold;\n"
"}"));

        horizontalLayout->addWidget(labelTexte);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnAtk4 = new QPushButton(page_combat);
        btnAtk4->setObjectName("btnAtk4");
        sizePolicy.setHeightForWidth(btnAtk4->sizePolicy().hasHeightForWidth());
        btnAtk4->setSizePolicy(sizePolicy);
        btnAtk4->setMinimumSize(QSize(0, 50));
        btnAtk4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;    /* Rouge Tomate */\n"
"    border: 2px solid #8B0000;    /* Bordure Rouge Sang */\n"
"    border-radius: 10px;          /* Bien arrondis */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;    /* Plus clair quand on passe la souris */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #500000;    /* Fonc\303\251 quand on clique */\n"
"}"));

        gridLayout->addWidget(btnAtk4, 1, 1, 1, 1);

        btnAtk1 = new QPushButton(page_combat);
        btnAtk1->setObjectName("btnAtk1");
        sizePolicy.setHeightForWidth(btnAtk1->sizePolicy().hasHeightForWidth());
        btnAtk1->setSizePolicy(sizePolicy);
        btnAtk1->setMinimumSize(QSize(0, 50));
        btnAtk1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;    /* Rouge Tomate */\n"
"    border: 2px solid #8B0000;    /* Bordure Rouge Sang */\n"
"    border-radius: 10px;          /* Bien arrondis */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;    /* Plus clair quand on passe la souris */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #500000;    /* Fonc\303\251 quand on clique */\n"
"}"));
        btnAtk1->setIconSize(QSize(20, 20));

        gridLayout->addWidget(btnAtk1, 0, 0, 1, 1);

        btnAtk3 = new QPushButton(page_combat);
        btnAtk3->setObjectName("btnAtk3");
        sizePolicy.setHeightForWidth(btnAtk3->sizePolicy().hasHeightForWidth());
        btnAtk3->setSizePolicy(sizePolicy);
        btnAtk3->setMinimumSize(QSize(0, 50));
        btnAtk3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;    /* Rouge Tomate */\n"
"    border: 2px solid #8B0000;    /* Bordure Rouge Sang */\n"
"    border-radius: 10px;          /* Bien arrondis */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;    /* Plus clair quand on passe la souris */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #500000;    /* Fonc\303\251 quand on clique */\n"
"}"));

        gridLayout->addWidget(btnAtk3, 1, 0, 1, 1);

        btnAtk2 = new QPushButton(page_combat);
        btnAtk2->setObjectName("btnAtk2");
        sizePolicy.setHeightForWidth(btnAtk2->sizePolicy().hasHeightForWidth());
        btnAtk2->setSizePolicy(sizePolicy);
        btnAtk2->setMinimumSize(QSize(0, 50));
        btnAtk2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF6347;    /* Rouge Tomate */\n"
"    border: 2px solid #8B0000;    /* Bordure Rouge Sang */\n"
"    border-radius: 10px;          /* Bien arrondis */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #FF4500;    /* Plus clair quand on passe la souris */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #500000;    /* Fonc\303\251 quand on clique */\n"
"}"));

        gridLayout->addWidget(btnAtk2, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        btnChange = new QPushButton(page_combat);
        btnChange->setObjectName("btnChange");
        sizePolicy.setHeightForWidth(btnChange->sizePolicy().hasHeightForWidth());
        btnChange->setSizePolicy(sizePolicy);
        btnChange->setMinimumSize(QSize(0, 100));
        btnChange->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4682B4; /* Bleu Acier */\n"
"    border: 2px solid #000080;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #005C96;    /* Plus clair quand on passe la souris */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #03224C;    /* Fonc\303\251 quand on clique */\n"
"}"));

        horizontalLayout->addWidget(btnChange);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_combat);
        page_equipe = new QWidget();
        page_equipe->setObjectName("page_equipe");
        verticalLayout_3 = new QVBoxLayout(page_equipe);
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelTitre = new QLabel(page_equipe);
        labelTitre->setObjectName("labelTitre");
        labelTitre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: white;\n"
"    border: 4px solid #333333;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    color: black;\n"
"}"));
        labelTitre->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelTitre);

        verticalSpacer_2 = new QSpacerItem(20, 111, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        btnPoke1 = new QToolButton(page_equipe);
        btnPoke1->setObjectName("btnPoke1");
        btnPoke1->setMinimumSize(QSize(200, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/bulbizarre_f.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPoke1->setIcon(icon);
        btnPoke1->setIconSize(QSize(100, 100));
        btnPoke1->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(btnPoke1, 0, 0, 1, 1);

        btnPoke2 = new QToolButton(page_equipe);
        btnPoke2->setObjectName("btnPoke2");
        btnPoke2->setMinimumSize(QSize(200, 200));
        btnPoke2->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(btnPoke2, 0, 1, 1, 1);

        btnPoke3 = new QToolButton(page_equipe);
        btnPoke3->setObjectName("btnPoke3");
        btnPoke3->setMinimumSize(QSize(200, 200));
        btnPoke3->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(btnPoke3, 0, 2, 1, 1);

        btnPoke4 = new QToolButton(page_equipe);
        btnPoke4->setObjectName("btnPoke4");
        btnPoke4->setMinimumSize(QSize(200, 200));
        btnPoke4->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(btnPoke4, 1, 0, 1, 1);

        btnPoke5 = new QToolButton(page_equipe);
        btnPoke5->setObjectName("btnPoke5");
        btnPoke5->setMinimumSize(QSize(200, 200));
        btnPoke5->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(btnPoke5, 1, 1, 1, 1);

        btnPoke6 = new QToolButton(page_equipe);
        btnPoke6->setObjectName("btnPoke6");
        btnPoke6->setMinimumSize(QSize(200, 200));
        btnPoke6->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(btnPoke6, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 110, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        btnRetour = new QPushButton(page_equipe);
        btnRetour->setObjectName("btnRetour");
        btnRetour->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF4500; /* Rouge */\n"
"    border: 3px solid #8B0000; /* Bordure fonc\303\251e */\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover { background-color: #FF6347; }\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #500000;    /* Fonc\303\251 quand on clique */\n"
"}"));

        verticalLayout_3->addWidget(btnRetour);

        stackedWidget->addWidget(page_equipe);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1440, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HPEnnemi->setFormat(QCoreApplication::translate("MainWindow", "%v/%m", nullptr));
        PokemonEnnemi->setText(QString());
        PokemonJoueur->setText(QString());
        HPJoueur->setFormat(QCoreApplication::translate("MainWindow", "%v/%m", nullptr));
        labelTexte->setText(QCoreApplication::translate("MainWindow", "Un combat f\303\251roce commence !", nullptr));
        btnAtk4->setText(QCoreApplication::translate("MainWindow", "Morsure", nullptr));
        btnAtk1->setText(QCoreApplication::translate("MainWindow", "Charge", nullptr));
        btnAtk3->setText(QCoreApplication::translate("MainWindow", "Rugissement", nullptr));
        btnAtk2->setText(QCoreApplication::translate("MainWindow", "Eclair", nullptr));
        btnChange->setText(QCoreApplication::translate("MainWindow", "Changer de pokemon", nullptr));
        labelTitre->setText(QCoreApplication::translate("MainWindow", "Choisis ton combattant", nullptr));
        btnPoke1->setText(QCoreApplication::translate("MainWindow", "Bulbizarre", nullptr));
        btnPoke2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnPoke3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnPoke4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnPoke5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnPoke6->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnRetour->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
