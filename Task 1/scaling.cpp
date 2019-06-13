#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace std;
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat out;
    resize(im,out,Size(im.cols * 0.6, im.rows * 0.6));
    imshow("Original", im);
    imshow("Output", out);
    waitKey();
}

