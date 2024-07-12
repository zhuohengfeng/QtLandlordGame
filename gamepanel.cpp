//
// Created by Rokid on 2024/7/12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_GamePanel.h" resolved

#include "gamepanel.h"
#include "ui_GamePanel.h"


GamePanel::GamePanel(QWidget *parent) :
        QWidget(parent), ui(new Ui::GamePanel) {
    ui->setupUi(this);
}

GamePanel::~GamePanel() {
    delete ui;
}
