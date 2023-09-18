#include "navegador.h"
#include "ui_navegador.h"

Navegador::Navegador(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Navegador)
{
    ui->setupUi(this);


    QWebEngineView *view = new QWebEngineView;
    view->load(QUrl("https://google.com.br"));
    ui->textBrowser->close();
    ui->gridLayout->addWidget(view);

    //ui->textBrowser->setHtml("<h1>Minha Pagina Inicial</h1>"
    //                "Primeira Pagina de exibicao");
}

Navegador::~Navegador()
{
    delete ui;
}


void Navegador::on_pushButton_clicked(){
    QWebEngineView *view = new QWebEngineView;
    view->load(QUrl(ui->lineEdit->text()));
    ui->textBrowser->close();

    QWidget *widget = ui->gridLayout->itemAt(1)->widget();//ele vai pegar o item que tiver em widget e limpar da grid, para nao ficar sempre aparecendo uma pag. embaixo da outra
    delete widget;

    ui->gridLayout->addWidget(view);
}

