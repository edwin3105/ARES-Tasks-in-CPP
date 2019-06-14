#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    Point2f inpM[4];
    Point2f outM[4];
    Mat im = imread("lane.jpg",IMREAD_COLOR);
    namedWindow("Original",WINDOW_NORMAL);
    namedWindow("Output",WINDOW_NORMAL);
    inpM[0] = Point2f(1171,1075);           //Four consecutive lines denotes storing four coordinates, taken from perpstrack.cpp, as points
    inpM[1] = Point2f(1624,1098);
    inpM[2] = Point2f(31,1275);
    inpM[3] = Point2f(1926,1357);

    outM[0] = Point2f(0,0);                 //Four consecutive lines denotes storing new coordinates for the coordinates taken in which
    outM[1] = Point2f(400,0);               //they will be transformed
    outM[2] = Point2f(0,400);
    outM[3] = Point2f(400,400);

    Mat out,M;
    M = getPerspectiveTransform(inpM, outM);      // Kernel definition
    warpPerspective(im,out,M,Size(400,400));
    imshow("Original",im);
    imshow("Output",out);
    waitKey();
}
