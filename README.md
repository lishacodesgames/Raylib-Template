# Raylib-Template
Copy this template to start a raylib project

## RAYLIB ON MAC:
- Follow instructions from <a href="https://youtu.be/MluOQdBuwiU">this YouTube video</a> for installation
- Copy the libraylib.a file from src into your PROJECT DIRECTORY in a folder called ‘lib’.
- Copy files ‘raylib.h’, ‘raymath.h’, ‘rlgl.h’ into your PROJECT DIRECTORY in a folder called ‘include’.
- For compilation, the command is: 
	clang++ *.cpp -L lib/ -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL lib/libraylib.a -o yourbinaryname

- Explanation:
	- clang++ = calling the compiler.
	- *.cpp = telling it to compile all .cpp files in the directory.
	- -L lib/ = finding the lib folder in this directory to find raylib.
	- -framework (CoreVideo, IOKit, Cocoa, GLUT, OpenGL) = Apple system frameworks that raylib depends on.
	- lib/libraylib.a = precompiled raylib binary file for running raylib
	- -o yourbinaryname = creates the binary file with the name you give it
