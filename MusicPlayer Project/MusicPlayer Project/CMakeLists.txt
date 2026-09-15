cmake_minimum_required(VERSION 3.15)
project(MySFMLProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Hint standard install paths for Fedora/RHEL if CMake struggles automatically
list(APPEND CMAKE_PREFIX_PATH "/usr/lib64/cmake/SFML")

# Find SFML components (adjust audio/graphics/window/system/network to your needs)
find_package(SFML 2.5 COMPONENTS graphics window system audio REQUIRED)

# Add your executable and source files
add_executable(my_game main.cpp)

# Link SFML libraries
target_link_libraries(my_game PRIVATE sfml-graphics sfml-window sfml-system sfml-audio)