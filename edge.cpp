#include <iostream>
#include "highgui.hpp"
#include "imgproc.hpp"

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{

    Mat image= imread("edge.jpg");
    Mat contours;
    Mat gray_image;

    cvtColor( image, gray_image, CV_RGB2GRAY );

    Canny(image,contours,10,350);

    namedWindow("Image");
    imshow("Image",image);

    namedWindow("Gray");
    imshow("Gray",gray_image);

    namedWindow("Canny");
    imshow("Canny",contours);
    waitKey(0);
}
