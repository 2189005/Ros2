#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

String folder = "/home/lab/Ros2/opencv/data/";

int main()
{
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);

    Mat lennaImg = imread(folder + "lenna.bmp");
    Mat maskSmile = imread(folder + "mask_smile.bmp", IMREAD_GRAYSCALE);

    lennaImg.setTo(yellow, maskSmile);

    imshow("img", lennaImg);
    waitKey(0);

    Mat airplaneImg = imread(folder + "airplane.bmp");
    Mat maskAirplane = imread(folder + "mask_airplane.bmp", IMREAD_GRAYSCALE);
    Mat sky = imread(folder + "field.bmp");

    airplaneImg.copyTo(sky, maskAirplane);

    imshow("img", sky);
    waitKey(0);

    return 0;
}