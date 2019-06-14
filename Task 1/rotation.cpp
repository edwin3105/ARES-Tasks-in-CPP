#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat M = getRotationMatrix2D(Point(im.cols/2,im.rows/2),60,1);       // Defining a kernel
    Mat out;
    warpAffine(im,out,M,im.size());
    imshow("Original",im);
    imshow("Output",out);
    waitKey();
}
