#include <QApplication>
#include "gamepanel.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    GamePanel gamePanel;
    gamePanel.setWindowTitle("Fight the Landlord");
    gamePanel.show();

    return QApplication::exec();
}
