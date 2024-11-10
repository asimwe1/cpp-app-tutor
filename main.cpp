#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>

int main(int argc, char **argv){
    QApplication app (argc, argv);

    QPushButton button;
    QIcon icon ("/home/landry/Documents/projects/cpp/cpp-app/public/logo.jpeg");
    QFont font ("Courier", -1, 300, false);
    button.setIcon(icon);
    button.setText("Press here");
    button.setToolTip("a toolTip");
    button.setFont(font);
    button.show();

    return app.exec();
}
