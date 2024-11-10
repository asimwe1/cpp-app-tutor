#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    // Create a QPushButton, which inherits from QAbstractButton and QWidget
    QPushButton button("Click Me");
    QFont font("Courier", 12, QFont::Bold);
    button.setFont(font);

    // Set an icon, tooltip, and display the button
    QIcon icon("/home/landry/Documents/projects/cpp/cpp-app/public/logo.jpeg");
    button.setIcon(icon);
    button.setToolTip("This is a button");

    button.show();
    return app.exec();
}
