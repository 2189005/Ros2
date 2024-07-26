#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/lab/Ros2/opencv/data/";
void on_levle_chage(int pos, void *data);

struct Mydata{
    Point pt1;
    Mat dst;
    Mat src;
};

int main(){
    Mydata mydata;
    mydata.src = imread(folder + "tekapo.bmp");
    mydata.pt1 = mydata.src.size() / 2;

    Mat M = getRotationMatrix2D(mydata.pt1, 30, 0.7);
    cout << M << endl;

    warpAffine(mydata.src, mydata.dst, M, Size());

    int a = 0;
    namedWindow("dst");
    createTrackbar("theta", "dst", &a, 360, on_levle_chage, &mydata);
    imshow("src", mydata.src);
    imshow("dst", mydata.dst);
    waitKey(0);

    return 0;
}

void on_levle_chage(int pos, void *data){
    Mydata *ptr = (Mydata *)data;
    Mat M = getRotationMatrix2D(ptr->pt1, pos, 0.7);
    warpAffine(ptr->src, ptr->dst, M, Size());
    imshow("dst", ptr->dst);
}