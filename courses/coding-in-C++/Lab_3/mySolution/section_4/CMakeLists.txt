# Navigate in the build folder and run the followin command , from Lab8
# cmake -G "MinGW Makefiles" ..     # command for local Windows machine
# cmake ..                          # command for Unix-based GitHub codespaces
# cmake --build .                   # Build the exe and run all tests
# ./Search_engine_app.exe           # run the main exe


cmake_minimum_required(VERSION 3.10)

project(Game_characters CXX)

# C++-Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --------------------------------------------------
# Library
# --------------------------------------------------

add_library(Library_for_main
    src/character.cpp
    src/warrior.cpp
)

# Include-folders
target_include_directories(Library_for_main PUBLIC include)

# --------------------------------------------------
# Unit-Test-Executable
# --------------------------------------------------

# --------------------------------------------------
# Activate CTest
# --------------------------------------------------

# --------------------------------------------------
# Ensure testing before each build
# --------------------------------------------------

# --------------------------------------------------
#  Main
# --------------------------------------------------

# Executable
add_executable(Game_characters_app
    main.cpp
)

target_link_libraries(Game_characters_app
    Library_for_main
)

# only build main if tests successful
#add_dependencies(playlist_app run_tests)

