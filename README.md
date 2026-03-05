# Raylib-Template
*Minimal* game template using raylib as a git submodule and CMake. <br>
This repository is intended to be used as a starting point for a new raylib project.

*I also have a more modular (lib-based) template, ![check it out](https://github.com/lishacodesgames/Raylib-Modular-Template)*

## How to Clone
`git clone --recursive` to get the raylib submodule local
<br>

**If you forgot, do:** <br>
`git submodule update --init --recursive` after regular `git clone`

## Project Structure
What your project architecture should ideally look like for the CMakeLists.txt I've included (Can change accordingly, otherwise)
```bash
‖
‖——.git*
‖——CMakeLists.txt
‖——CMakePresets.json
‖——include/
‖  ‖——*.h or *.hpp → all *your* header files
‖——src/
‖  ‖——main.cpp
‖  ‖——*.cpp  → all other source files
‖——raylib/   → your raylib engine (submodule)
```
## Build
`mkdir build`
`cd build` <br>
`cmake --preset Debug` OR `cmake --preset Release` -- (configuration of cmake) <br>
`cmake --build --preset Debug` OR `cmake --build --preset Release` -- (compilation + build of your files, only what has changed since last build)
<br>

*Check out ![CMakePresets.json](CMakePresets.json) if you're confused* <br>

Executable will appear in `build/` under preset name
<br>

### Linux Dependencies
Raylib requires a lot of libraries that are built-in on Mac and Windows. <br>
No worries, Linux just requires 1 command to install them all:
```bash
sudo apt install \
    libx11-dev \
    libxcursor-dev \
    libxrandr-dev \
    libxi-dev \
    libxinerama-dev \
    libgl1-mesa-dev \
    libasound2-dev \
    libpulse-dev \
    libxkbcommon-dev
```

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
```bash
cd raylib
git pull
cd ..
git add raylib
git commit -m "Updated raylib submodule"
```

## Requirements
* CMake 3.20+
* C++ compiler: GCC / Clang
* Ninja (not *required*, but it's what the presets use)
