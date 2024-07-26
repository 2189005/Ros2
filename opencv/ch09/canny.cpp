#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

String folder = "/home/lab/Ros2/opencv/data/";

int main()
{
    Mat img = imread(folder + "lenna.bmp");
    Mat dst1, dst2;

    Canny(img, dst1, 50, 100);
    Canny(img, dst2, 100, 150);


    imshow("dst1", dst1);
    imshow("dst2", dst2);
    imshow("img", img);
    waitKey(0);

    return 0;
}