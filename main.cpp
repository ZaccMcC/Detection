#pragma ide diagnostic ignored "EndlessLoop"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/utility.hpp>

int main()
{
    cv::namedWindow("test", cv::WINDOW_AUTOSIZE);
    cv::Mat labelledImageRec = cv::imread( R"(C:\Users\zacmc\Downloads\lab1_3\untitled\image_obj1.png)", 1 );
    cv::imshow("Image with rectangle", labelledImageRec);
    cv::waitKey(0);


}