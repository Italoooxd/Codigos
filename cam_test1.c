#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
 
using namespace cv;
using namespace std;
 
int main(int argc,char ** argv)
{
 
  VideoCapture cap(0);
 
  Mat frame;
  while(1) {
    cap.read(frame);
    imshow("Teste",frame);
    //int key = cv::waitKey(5);
    if (waitKey(30)>= 0)
     break;
  }
 
	  return 0;
}
