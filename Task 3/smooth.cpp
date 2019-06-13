#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat avg,gau,med,bil;
    blur(im,avg,Size(5,5));
    GaussianBlur(im,gau,Size(5,5),0);
    medianBlur(im,med,5);
    bilateralFilter(im,bil,10,110,110);
    imshow("Original",im);
    imshow("Average",avg);
    imshow("Gaussian",gau);
    imshow("Median",med);
    imshow("Bilateral",bil);
    waitKey();
}
