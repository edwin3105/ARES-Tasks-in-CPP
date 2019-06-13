#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("lane.jpg",IMREAD_COLOR);
    Mat gray,out;
    cvtColor(im,gray,COLOR_BGR2GRAY);
    Sobel(gray,out,CV_8U,0,1,5);
    namedWindow("Original",WINDOW_NORMAL);
    namedWindow("Output",WINDOW_NORMAL);
    imshow("Original",im);
    imshow("Output",out);
    waitKey();
}
