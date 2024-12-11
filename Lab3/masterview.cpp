#include "masterview.h"
#include "./ui_masterview.h"

MasterView::MasterView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MasterView)
{
    ui->setupUi(this);
}

MasterView::~MasterView()
{
    delete ui;
}

void MasterView::goLoginView()
{

}

void MasterView::goWelcomeView()
{

}

void MasterView::goDoctorView()
{

}

void MasterView::goDepartmantView()
{

}

void MasterView::goPatientEditView()
{

}

void MasterView::goPatientView()
{

}

void MasterView::goPreviousView()
{

}
