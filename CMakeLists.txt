cmake_minimum_required(VERSION 3.26)
project(PhotoEdits)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(PhotoEdits cmake-build-debug/src/main.cpp
        cmake-build-debug/src/windoo.cpp
        cmake-build-debug/src/windoo.hpp
        cmake-build-debug/src/windoo.ui
        cmake-build-debug/src/Image.cpp
        cmake-build-debug/src/Image.hpp)
target_link_libraries(PhotoEdits
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)

