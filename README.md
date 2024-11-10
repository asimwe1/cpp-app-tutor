# cpp-app-tutorial

## Lesson 2: Making The "Hello World" Button Pretty

This lesson builds on the previous "Hello World" button tutorial by adding a custom font, a tooltip, and an image icon to the button.

### Prerequisites

Ensure that you have:
- Completed **Lesson 1** and created a basic "Hello World" button on the branch `L1-helloWorld`.
- The Qt environment set up.
- An image file (`logo.jpeg`) available at `/home/landry/Documents/projects/cpp/cpp-app/public/`.

### Step 1: Create a New Branch

To keep things organized, create a new branch for this lesson:
```bash
git checkout -b L2-helloWorldButtonImage
```

### Step 2: Organize Project Structure

To keep the image accessible to the project, create a `public` folder in your project directory and place `logo.jpeg` there:
```
cpp-app/
├── source/
│   ├── main.cpp
├── public/
│   └── logo.jpeg
```

### Step 3: Update `main.cpp`

Replace the contents of your `main.cpp` file with the following code:

```cpp
#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QPushButton button;

    QIcon icon("/home/landry/Documents/projects/cpp/cpp-app/public/logo.jpeg");
    QFont font("Courier", -1, 300, false);
    button.setIcon(icon);
    button.setText("Press here");
    button.setToolTip("a toolTip");
    button.setFont(font);
    button.show();

    return app.exec();
}
```

### Explanation of `main.cpp`

- **QIcon icon("/path/to/logo.jpeg");**: Loads an image from the specified path and sets it as the button icon.
- **button.setIcon(icon);**: Applies the icon to the button.
- **button.setText("Press here");**: Sets the button's text.
- **button.setToolTip("a toolTip");**: Adds a tooltip that appears when you hover over the button.
- **QFont font("Courier", -1, 300, false);**: Sets the button's font to "Courier" with a weight of 300 (if supported).
- **button.setFont(font);**: Applies the font to the button.
- **button.show();**: Displays the button.

### Step 4: Build and Run

1. Build the project by selecting **Build** or pressing `Ctrl+B`.
2. Run the application by selecting **Run** or pressing `Ctrl+R`.
3. A window with a button labeled "Press here" should appear, with the image `logo.jpeg` as its icon, styled with the "Courier" font, and a tooltip that shows "a toolTip" when hovered over.

---

This concludes Lesson 2. You now have a button with an image icon, custom font, and tooltip!