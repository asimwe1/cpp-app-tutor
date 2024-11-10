#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char **argv){
    QApplication app (argc, argv);

    QPushButton button;
    button.setText("Press here");
    button.setToolTip("a toolTip");
    QFont font ("Courier");
    button.setFont(font);
    button.show();

    return app.exec();
}
