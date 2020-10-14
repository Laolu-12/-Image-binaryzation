#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;

int main()
{
	cv::Mat srcMat = imread("C:\\Users\\Lenovo\\Desktop\\∫Ï–°∂π2.jpg",0);
	cv::Mat result;

	threshold(srcMat, result,110,255, THRESH_BINARY);

	imshow("src", srcMat);
	imshow("result", result);
	waitKey(0);
	return 0;

}
