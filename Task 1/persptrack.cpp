#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;

void func(int event, int x, int y, int flags, void* userdata)
{
    if(event == EVENT_LBUTTONDOWN){
        cout<<x<<", "<<y<<endl;
    }
}

int main(int argv, char** argc)
{
    Mat im = imread("lane.jpg",IMREAD_COLOR);
    namedWindow("Image",WINDOW_NORMAL);
    setMouseCallback("Image",func,NULL);
    imshow("Image",im);
    waitKey();
}
