#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(int argv, char** argc)
{
    string file = "haarcascade_frontalface_default.xml";
    CascadeClassifier face;
    face.load(file);                                                  // Loading Classifier's xml file

    Mat im = imread("ronaldo.jpg",IMREAD_COLOR);
    Mat gray;
    cvtColor(im,gray,COLOR_BGR2GRAY);
    vector<Rect> det;                                                 // Vector to store detected coordinates
    face.detectMultiScale(gray,det,1.1,3);                            // detectMultiScale function with scale factor 1.1
    for(size_t i=0;i<det.size();i++){
        rectangle(im,det[i].tl(),det[i].br(),Scalar(255,0,0),2);      // Draws rectangle around face, of thickness 2 and color blue
    }
    imshow("Output",im);
    waitKey();
}
