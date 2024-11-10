# cpp-app-tutorial

## Lesson 2: Adding Custom Fonts to a "Hello World" Button

This lesson builds on the previous "Hello World" button tutorial by adding a custom font and tooltip to the button using Qt.

### Prerequisites

Ensure that you have:
- Completed **Lesson 1** and created a basic "Hello World" button on the branch `L1-helloWorld`.
- The Qt environment set up.

### Step 1: Create a New Branch

To keep things organized, create a new branch for this lesson:
```bash
git checkout -b L2-helloWorldButtonFont
```

### Step 2: Update `main.cpp`

Replace the contents of your `main.cpp` file with the following code:

```cpp
#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QPushButton button;
    button.setText("Press here");
    button.setToolTip("a toolTip");

    QFont font("Courier");
    button.setFont(font);
    button.show();

    return app.exec();
}
```

### Explanation of `main.cpp`

- **QPushButton button;**: Creates an empty button object.
- **button.setText("Press here");**: Sets the text for the button.
- **button.setToolTip("a toolTip");**: Adds a tooltip that appears when you hover over the button.
- **QFont font("Courier");**: Sets the button's font to "Courier."
- **button.setFont(font);**: Applies the font to the button.
- **button.show();**: Displays the button.
- **return app.exec();**: Starts the application event loop.

### Step 3: Build and Run

1. Build the project by selecting **Build** or pressing `Ctrl+B`.
2. Run the application by selecting **Run** or pressing `Ctrl+R`.
3. A window with a button labeled "Press here" in "Courier" font should appear, with a tooltip that shows "a toolTip" when hovered over.

---

This should successfully build and run your new button with custom styling in Qt!