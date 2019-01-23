// Computer Vision OpenCV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
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

#include "pch.h"
#include <iostream>
#include <string> 
#include <sstream> 

using namespace std;

// OpenCV includes 
#include "opencv2/core.hpp" //core header that declares the image data structure
#include "opencv2/highgui.hpp" //contains all the graphical interface functions.
using namespace cv;


int RadImage();

string ImagePath = "../murshoom.jpg";

int main(int argc, const char** argv)
{
	//read Image
	RadImage();

}

//Read, Write and width and height of the image
int RadImage() {
	// Read images 
	Mat colorImage = imread(ImagePath);
	Mat grayImage = imread(ImagePath, IMREAD_GRAYSCALE);
	if (!colorImage.data) // Check for invalid input 
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}
	// Write images in app
	imwrite("../murshoomGray.jpg", grayImage);


	//get image width and height
	cout << "Width : " << colorImage.cols << endl;
	cout << "Height: " << colorImage.rows << endl;
	//another way to get image width and height 
	cout << "Size => Width : " << colorImage.size().width << endl;
	cout << "Size => Height: " << colorImage.size().height << endl;

	// show images 
	imshow("Lena BGR", colorImage);
	imshow("Lena Gray", grayImage);
	// wait for any key press 
	waitKey(0);
	return 0;
}


