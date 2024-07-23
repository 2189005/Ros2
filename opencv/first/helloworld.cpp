#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "hello, world" << std::endl;
    cv::Mat img;
    img = cv::imread("lenna.bmp");
    cv::imshow("image", img);
    cv::waitKey(0);
    return 0;
}