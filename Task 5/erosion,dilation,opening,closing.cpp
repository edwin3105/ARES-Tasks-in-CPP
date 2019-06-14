#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat M = getStructuringElement(MORPH_RECT,Size(3,3));    // Kernel defining
    Mat ero,dil,op,cl;
    erode(im,ero,M);                                        // erode function
    dilate(im,dil,M);                                       // dilate function
    morphologyEx(im,op,MORPH_OPEN,M);                       // morphologyEx function with MORPH_OPEN to implement opening
    morphologyEx(im,cl,MORPH_CLOSE,M);                      // morphologyEx function with MORPH_CLOSE to implement closing
    imshow("Original",im);
    imshow("Erosion",ero);
    imshow("Dilation",dil);
    imshow("Opening",op);
    imshow("Closing",cl);
    waitKey();
}
