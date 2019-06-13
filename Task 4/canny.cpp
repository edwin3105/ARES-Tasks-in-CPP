#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
int main(int argv, char** argc)
{
    int n,n1,k;
    Mat im = imread("pic.jpg",IMREAD_COLOR);
    Mat gray,out;
    cvtColor(im,gray,COLOR_BGR2GRAY);
    namedWindow("Output");
    createTrackbar("Min","Output",0,255);        // Trackbar for minimum threshold value
    createTrackbar("Max","Output",0,255);        // Trackbar for maximum threshold value
    while(1){
        n = getTrackbarPos("Min","Output");
        n1 = getTrackbarPos("Max","Output");
        Canny(gray,out,n,n1);                    // Canny function
        imshow("Output",out);
        k = waitKey(1);
        if(k==81 || k==113){                     // Breaks loop only when key pressed is 'q' or 'Q'
            break;
        }
    }
}
