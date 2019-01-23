// Computer Vision OpenCV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

/*
Add OpenCV to Project
in Project properties:
C/C++ =>  General => Additional Include Directories( $(OPENCV_DIR)\include).
Linker => General => Additional Library Directories ($(OPENCV_DIR)\x64\vc15\lib).

Linker => Input => Additional Dependencies, Add
Input Debug:
opencv_img_hash400d.lib
opencv_world400d.lib
------------------------
Input Relase:
opencv_img_hash400.lib
opencv_world400.lib
*/

int main()
{
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
