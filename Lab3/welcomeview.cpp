#include "welcomeview.h"
#include "ui_welcomeview.h"
#include <QDebug>

WelcomeView::WelcomeView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomeView)
{
    qDebug() << "create WelcomView";
    ui->setupUi(this);
}

WelcomeView::~WelcomeView()
{
    qDebug() << "destroy WelcomView";
    delete ui;
}
