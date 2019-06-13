#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat avg,gau,med,bil;
    blur(im,avg,Size(5,5));                      //Average blur
    GaussianBlur(im,gau,Size(5,5),0);            //Gaussian blur
    medianBlur(im,med,5);                        //Median blur
    bilateralFilter(im,bil,10,110,110);          //Bilateral filter
    imshow("Original",im);
    imshow("Average",avg);
    imshow("Gaussian",gau);
    imshow("Median",med);
    imshow("Bilateral",bil);
    waitKey();
}
