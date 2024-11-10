# cpp-app-tutor
## Qt Class Hierarchy Overview

Qt's framework is heavily based on object-oriented programming, with inheritance as a core feature, particularly in its Widgets module. The following guide explains key elements of Qt's class hierarchy with a focus on widgets.

### Class Structure

The basic class structure in Qt is shown in the diagram. Here’s an overview of some primary classes and their relationships:

- **QObject**: This is the most fundamental class in Qt, from which most other classes inherit. It provides powerful capabilities such as:
  - **Object Name**: Allows you to assign a name to an object and search for objects by name.
  - **Parenting System**: Manages object hierarchies, with a parent-child structure.
  - **Signals and Slots**: Qt’s unique event-driven communication system.
  - **Event Management**: Provides mechanisms for handling various types of events.

- **QWidget**: Nearly all graphical elements in Qt inherit from QWidget. It represents the base class for all UI objects, like windows, buttons, labels, and other components. QWidget provides core properties for managing UI elements, including position, size, and appearance.

#### Key Widget Subclasses

1. **QAbstractButton**: The base class for all types of buttons, such as:
   - **QPushButton**: A push button widget.
   - **QCheckBox**: A checkbox widget.
   - **QRadioButton**: A radio button widget.

2. **QFrame**: Provides a frame or border around a widget. This is useful for organizing visual sections within the UI.

3. **QLabel**: Displays a piece of text or an image.

4. **QProgressBar**: Shows a progress indicator.

5. **QTextEdit**: A rich text editor for displaying and editing multi-line text.

6. **QGraphicsView**: A widget for displaying graphical items, often used in more complex interfaces.

## Example: Hierarchy graphical presantation

Here’s a simple example that demonstrates the hierarchy by creating a `QPushButton` widget and customizing it. Since `QPushButton` inherits from `QAbstractButton`, which inherits from `QWidget`, it inherits many properties and functions from these parent classes.

![class heirarchy](/home/landry/Documents/projects/cpp/cpp-app/public/heirerchy.png)

#### Explanation

- **QApplication**: Manages the application’s control flow and main settings.
- **QPushButton**: Represents a button widget; it inherits properties like position, text, and font from QWidget and QAbstractButton.
- **QFont**: Sets the font style for the button text.
- **QIcon**: Adds an icon to the button.
- **setToolTip**: Adds a tooltip that appears when the user hovers over the button.

### Summary

The Qt hierarchy allows for efficient code management and customization by leveraging inheritance. Widgets, which inherit from `QObject` and `QWidget`, can use features such as signals and slots, event handling, and parenting systems. This makes Qt powerful for creating responsive, complex GUIs in C++.
