# Raylib-CMake-Template
Minimal game template using raylib as a git submodule and CMake. <br>
This repository is intended to be used as a starting point for a new raylib project

## How to Clone
`git clone --recursive` to get the raylib submodule local
<br>

**If you forgot:** <br>
`git submodule update --init --recursive` after regular `git clone`

## Project Structure
What your project architecture should ideally look like for the CMakeLists.txt I've included (Can change accordingly, otherwise)
```
‖
‖——CMakeLists.txt
‖——src/
‖  ‖——main.cpp
‖  ‖——*.cpp  → all other source files
‖——raylib/   → your raylib engine (submodule)
```
## Build (MinGW Example)
`mkdir build`
`cd build` <br>
`cmake --preset Debug` OR `cmake --preset Release` -- (configuration of cmake) <br>
`cmake --build --preset Debug` OR `cmake --build --preset Release` -- (compilation + build of your files, only what has changed since last build)
<br>

Executable will appear in `build/` under preset name
<br>

## Add New Source Files
Put any new `.cpp` or `.c` files in `src/` <br>
Update CMakeLists.txt as needed, example:
```cmake
add_executable(YourProjectName
  src/main.cpp
  src/other_file.cpp
)
```

## Updating raylib (the submodule)
`cd raylib` <br>
`git pull` <br>
`cd ..` <br>
`git commit -a -m "Update raylib"`

## Requirements
* CMake 3.20+
* C++17 compiler
* MinGW / MSVC / Clang
* Ninja (not *required*, but it's what the presets use)
