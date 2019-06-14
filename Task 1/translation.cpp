#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat M = (Mat_<double>(2,3)<<1,0,100,0,1,50);              // Defining a kernel
    Mat out;
    warpAffine(im,out,M,im.size());
    imshow("Original",im);
    imshow("Output",out);
    waitKey();
}
