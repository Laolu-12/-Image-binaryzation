#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;

int main()
{
	cv::Mat srcMat = imread("C:\\Users\\Lenovo\\Desktop\\∫Ï–°∂π2.jpg", 0);
	cv::Mat result;

	adaptiveThreshold(srcMat, result, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("src", srcMat);
	imshow("result", result);
	waitKey(0);
	return 0;


}