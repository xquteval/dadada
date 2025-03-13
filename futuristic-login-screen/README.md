# Futuristic Login Screen

This project is a Qt-based application that features a futuristic login screen. The application is designed to provide a modern and sleek user interface for user authentication.

## Project Structure

- **src/**: Contains the source code files for the application.
  - **main.cpp**: Entry point of the application. Initializes the Qt application and creates an instance of the MainWindow class.
  - **mainwindow.cpp**: Implementation of the MainWindow class, handling the setup of the login screen and user interactions.
  - **mainwindow.h**: Header file defining the MainWindow class, including methods for UI initialization and login event handling.
  - **mainwindow.ui**: Qt Designer file that defines the layout and properties of the login screen UI elements.
  
- **CMakeLists.txt**: Configuration file for CMake, specifying the project name, required Qt modules, and source files to be compiled.

## Setup Instructions

1. Ensure you have Qt and CMake installed on your system.
2. Clone the repository or download the project files.
3. Open a terminal and navigate to the project directory.
4. Create a build directory:
   ```
   mkdir build
   cd build
   ```
5. Run CMake to configure the project:
   ```
   cmake ..
   ```
6. Build the project:
   ```
   cmake --build .
   ```
7. Run the application:
   ```
   ./futuristic-login-screen
   ```

## Features

- Modern and intuitive user interface.
- User authentication with a sleek design.
- Responsive layout for various screen sizes.

## Future Enhancements

- Implement user registration functionality.
- Add password recovery options.
- Enhance security features for user authentication.