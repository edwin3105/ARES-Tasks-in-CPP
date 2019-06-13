#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat_<float> M(3,3);
    M<<-1,-1,-1,-1,9,-1,-1,-1,-1;
    Mat out;
    filter2D(im,out,im.depth(),M);
    imshow("Original",im);
    imshow("Output",out);
    waitKey();
}
