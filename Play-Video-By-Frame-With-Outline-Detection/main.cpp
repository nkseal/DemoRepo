#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <thread>

using namespace cv;
using namespace std;

VideoCapture capture("E:\\test.mp4");
Mat edges;

void thread_call()
{
    while (true)
    {
        Mat frame;
        capture >> frame;

        Mat dst, edge, gray;
        dst.create(frame.size(), frame.type());
        cvtColor(frame, gray, COLOR_BGR2GRAY);
        blur(gray, edge, Size(3, 3));
        Canny(edge, edge, 3, 9, 3);
        dst = Scalar::all(0);
        frame.copyTo(dst, edge);
        imshow("edges", dst);
        waitKey(30);
    }
}

int main()
{
    if (!capture.isOpened())
        return -1;

    namedWindow("edges", 1);
    //thread myThread(thread_call);
    //myThread.join();
    thread_call();
    return 0;
}