# Navigate in the build folder and run the followin command , from Lab8
# cmake -G "MinGW Makefiles" ..     # command for local Windows machine
# cmake ..                          # command for Unix-based GitHub codespaces
# cmake --build .                   # Build the exe and run all tests
# ./Search_engine_app.exe           # run the main exe


cmake_minimum_required(VERSION 3.10)

project(Search_engine CXX)

# C++-Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --------------------------------------------------
# Library
# --------------------------------------------------

add_library(playlist
    src/query.cpp
    src/system.cpp
    src/web_page.cpp 
)

# Include-folders
target_include_directories(playlist PUBLIC include)

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
add_executable(Search_engine_app
    search_engine.cpp
)

target_link_libraries(Search_engine_app
    playlist
)

# only build main if tests successful
#add_dependencies(playlist_app run_tests)

