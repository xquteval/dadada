project(futuristic-login-screen)

cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
)

set(HEADERS
    src/mainwindow.h
)

set(UI_FILES
    src/mainwindow.ui
)

qt5_wrap_ui(UI_HEADERS ${UI_FILES})

add_executable(futuristic-login-screen ${SOURCES} ${HEADERS} ${UI_HEADERS})

target_link_libraries(futuristic-login-screen Qt5::Widgets)