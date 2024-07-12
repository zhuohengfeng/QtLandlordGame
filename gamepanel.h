//
// Created by Rokid on 2024/7/12.
//

#ifndef LANDLORDGAME_GAMEPANEL_H
#define LANDLORDGAME_GAMEPANEL_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class GamePanel; }
QT_END_NAMESPACE

class GamePanel : public QWidget {
Q_OBJECT

public:
    explicit GamePanel(QWidget *parent = nullptr);

    ~GamePanel() override;

private:
    Ui::GamePanel *ui;
};


#endif //LANDLORDGAME_GAMEPANEL_H
