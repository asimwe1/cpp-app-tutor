# cpp-app-tutor

## Getting Started: Creating a "Hello World" Button

This repo walks through the initial setup and creation of a simple "Hello World" button in Qt Creator.

### Prerequisites

Ensure you have:
- Installed and configured the Qt environment.

### Step 1: Set Up the Project

1. Open Qt Creator and create a new project.
2. Clone this branch into your project directory to use it as a base:
   ```bash
   git clone git@github.com:asimwe1/cpp-app-tutor.git
   ```
   or
   ```bash
   git clone https://github.om/asimwe1/cpp-app-tutor.git
   ```
3. Open the project in Qt Creator.

### Step 2: Write the Code

In your project, open or create the `main.cpp` file and add the following code:

```cpp
#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    QPushButton button("Hello World!");
    button.show();

    return app.exec();
}
```

### Explanation of `main.cpp`

- **QApplication app(argc, argv)**: Initializes the application. This is necessary for handling events.
- **QPushButton button("Hello World!")**: Creates a button with the text "Hello World!".
- **button.show()**: Displays the button on the screen.
- **return app.exec()**: Starts the event loop, keeping the application running until it's closed.

### Step 3: Run the Application

1. Build the project by selecting the **Build** button or pressing `Ctrl+B`.
2. Run the application by selecting the **Run** button or pressing `Ctrl+R`.
3. A window with a "Hello World!" button should appear.

---

This should set up a basic Qt application with a functional button to get you started!