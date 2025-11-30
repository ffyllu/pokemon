#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized(); // ouvre la fenêtre en grand
    //ui->stackedWidget->setCurrentIndex(1); // Force l'affichage de la page 2 au lancement
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mettreAJourCouleurVie(QProgressBar* barre){

    // 1. Calculer le pourcentage
    int valeur = barre->value();
    int max = barre->maximum();
    float pourcentage = (float)valeur / (float)max;

    // 2. Choisir la couleur
    QString couleur;
    if (pourcentage > 0.5) {
        couleur = "#32CD32"; // Vert (Plus de 50%)
    } else if (pourcentage > 0.2) {
        couleur = "#FFA500"; // Orange (Entre 20% et 50%)
    } else {
        couleur = "#FF0000"; // Rouge (Moins de 20%)
    }

    // 3. Application du Style COMPLET
    // J'ai ajouté min-height et max-height pour empêcher le rétrécissement
    QString style = "QProgressBar {"
                    "border: 3px solid #333333;"  /* La bordure gris foncé */
                    "border-radius: 0px;"
                    "background-color: #555555;"
                    "text-align: center;"
                    "color: white;"
                    "font-weight: bold;"
                    "min-height: 18px;"           /* <-- EMPÊCHE DE RÉTRÉCIR EN HAUTEUR */
                    "max-height: 18px;"           /* <-- GARDE LA TAILLE FIXE */
                    "}"
                    "QProgressBar::chunk {"
                    "background-color: " + couleur + ";"
                                "}";

    barre->setStyleSheet(style);
}


void MainWindow::on_btnAtk1_clicked(){
    // 1. On récupère la vie actuelle de la barre de l'ennemi
    int vieActuelle = ui->HPEnnemi->value();

    // 2. On calcule la nouvelle vie (on enlève 10 points pour tester)
    int nouvelleVie = vieActuelle - 10;

    // 3. On empêche la vie de descendre en dessous de 0 (Sécurité)
    if (nouvelleVie < 0) {
        nouvelleVie = 0;
    }

    // 4. On met à jour la barre visuelle
    ui->HPEnnemi->setValue(nouvelleVie);

    // 5. On met à jour le message de combat
    ui->labelTexte->setText("Salamèche subit 10 dégâts !");

    mettreAJourCouleurVie(ui->HPEnnemi);
}
