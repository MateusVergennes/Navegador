#ifndef NAVEGADOR_H
#define NAVEGADOR_H

#include <QMainWindow>

#include <QWebEngineView>

QT_BEGIN_NAMESPACE
namespace Ui { class Navegador; }
QT_END_NAMESPACE

class Navegador : public QMainWindow
{
    Q_OBJECT

public:
    Navegador(QWidget *parent = nullptr);
    ~Navegador();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Navegador *ui;
};
#endif // NAVEGADOR_H
