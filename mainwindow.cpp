#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connecter le bouton pour ouvrir le fichier à la fonction ouvrirFichier
    connect(ui->btnDoss, &QPushButton::clicked, this, &MainWindow::ouvrirFichier);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ouvrirFichier()
{
    // Limiter la sélection aux fichiers .txt
    QString myOpenFile = QFileDialog::getOpenFileName(this, tr("Choisir et Ouvrir un fichier"), tr("C:\\"), tr("Text Files (*.*)"));

    if (myOpenFile.isEmpty())
    {
        QMessageBox::warning(this, "ERREUR", "Le fichier n'a pas été sélectionné !");
        return;
    }

    QFile file(myOpenFile);

    if (!file.exists())
    {
        QMessageBox::critical(this, "Erreur", "Le fichier " + myOpenFile + " n'existe pas.");
        return;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(this, "Erreur", "Échec de l'ouverture en mode lecture du fichier " + myOpenFile);
        return;
    }

    QTextStream flux(&file);
    QString contenu = flux.readAll();
    file.close();

    // Afficher le contenu du fichier dans un label
    ui->labelFileContent->setText(contenu);

    QMessageBox::information(this, "Succès", "Le fichier a été lu avec succès !");
}

void MainWindow::on_btnDoss_clicked()
{
    ouvrirFichier();
}

void MainWindow::on_btnRSA_clicked()
{
    btnRSA *bouton = new btnRSA(this);
    bouton->setProperty("mon_style", true);

    bouton->setStyleSheet("btnRSA#mon_style {background-color: rgb(91, 203, 161); border-radius: 10px; }"
    "QPushButton#mon_style:hover {background-color: rgb(146, 211, 187); border: 2px dashed rgb(91, 203, 161); }" );
}

