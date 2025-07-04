# Simple C++ Console Calculator

A basic command-line calculator application built with C++. This project demonstrates fundamental C++ programming concepts, including input/output, conditional statements, loops, and function usage.

## Features

-   **Addition (`+`)**: Adds two numbers.
-   **Subtraction (`-`)**: Subtracts the second number from the first.
-   **Multiplication (`*`)**: Multiplies two numbers.
-   **Division (`/`)**: Divides the first number by the second. Includes basic error handling for division by zero.
-   **Interactive Menu**: Guides the user through operation choices.
-   **Input Validation**: Ensures valid numeric input.

## Getting Started

### For End Users (Download & Run Executable)

If you just want to use the calculator without building it from source:

1.  Go to the [**Releases page**](https://github.com/somegitdev/simple-calculator/releases) of this repository.
2.  Download the latest `calculator.exe` from the "Assets" section of the desired release.
3.  Run the `calculator.exe` file on your Windows machine.
4.  Follow the prompts in the console window to perform calculations.

### For Developers (Build from Source)

If you wish to compile the project yourself, debug it, or contribute:

**Prerequisites:**

* **Visual Studio with C++ Desktop Development Workload** (includes `cl.exe` and associated tools).
* **Visual Studio Code**
* **C/C++ Extension Pack** for VS Code.
* **Git** for version control.

**Steps to Build and Run:**

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/somgitdev/simple-calculator.git](https://github.com/somgitdev/simple-calculator.git)
    cd simple-calculator
    ```
2.  **Open VS Code from Developer Command Prompt:**
    * Search for "Developer Command Prompt for VS" in your Windows Start Menu and open it.
    * Navigate to your `simple-calculator` project folder (`cd path/to/simple-calculator`).
    * Type `code .` and press Enter to open VS Code in the correct environment.
3.  **Build the Project:**
    * In VS Code, open the Command Palette (`Ctrl+Shift+P`).
    * Type `Tasks: Run Build Task` and select `build calculator (cl.exe)`.
    * The compiled `calculator.exe` will be placed in the `releases/` folder.
4.  **Run/Debug:**
    * Go to the Run and Debug view (`Ctrl+Shift+D`).
    * Select "Debug Calculator (MSVC)" from the dropdown.
    * Click the green play button to start the application.





