# Navigate in the build folder and run the followin command , from Lab8
# cmake -G "MinGW Makefiles" ..     # command for local Windows machine
# cmake ..                          # command for Unix-based GitHub codespaces
# cmake --build .                   # Build the exe and run all tests
# ./playlist_app.exe             # run the main exe


cmake_minimum_required(VERSION 3.10)

project(playlist_app C)

# C-Standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include-folders
include_directories(include)

# --------------------------------------------------
# Library
# --------------------------------------------------

add_library(playlist
    src/playlist.c
    src/algorithms.c
)

# --------------------------------------------------
# Unit-Test-Executable
# --------------------------------------------------

add_executable(test_playlist
    test/test_playlist.c
)
target_link_libraries(test_playlist
    playlist
)

add_executable(test_algorithms
    test/test_algorithms.c  
)
target_link_libraries(test_algorithms
    playlist
)

# --------------------------------------------------
# Activate CTest
# --------------------------------------------------

enable_testing()

add_test(
    NAME PlaylistUnitTests
    COMMAND test_playlist
)
add_test(
    NAME PlayalgorithmsTest
    COMMAND test_algorithms
)

# --------------------------------------------------
# Ensure testing before each build
# --------------------------------------------------

# Custom Target to execute tests
add_custom_target(run_tests
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS test_playlist
    COMMENT "Running unit tests"
)

# --------------------------------------------------
#  Main
# --------------------------------------------------

# Executable
add_executable(playlist_app
    main.c
)

target_link_libraries(playlist_app
    playlist
)

# only build main if tests successful
add_dependencies(playlist_app run_tests)