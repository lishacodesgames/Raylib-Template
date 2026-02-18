cmake_minimum_required(VERSION 3.20)

# EDIT your project name and languages (DO NOT REMOVE C. RAYLIB IS IN C)
project(MyGame LANGUAGES C CXX)

# Raylib uses C99, can update to any version after that
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

# raylib cmake has this on, leads to errors
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(raylib)

add_executable(${PROJECT_NAME} # EDIT name of your binary
   src/main.cpp
   src/example_game.cpp # can delete. I've just added a test loop in there to test your build system immediately
)

# where #include "" jumps to. replace with src if you want both .h and .c or .hpp and .cpp in src/
# remove this if your headers are not in a subdirectory
target_include_directories(${PROJECT_NAME} PRIVATE include )

# external libraries
target_link_libraries(${PROJECT_NAME} PRIVATE raylib )