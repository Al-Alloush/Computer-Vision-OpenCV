
#include <iostream>
#include <string> 
#include <sstream> 
using namespace std;

// OpenCV includes 
#include "opencv2/core.hpp" //core header that declares the image data structure
#include "opencv2/highgui.hpp" //contains all the graphical interface functions.
using namespace cv;

class ReadingVideo {

	 void ReadingVideoMethod() {


		// Read images 
		Mat colorImage = imread("../murshoom.jpg");
		imshow("Lena BGR", colorImage);

		waitKey(0);

	}
};



