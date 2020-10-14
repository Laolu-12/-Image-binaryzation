#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;

void threshod_Mat(int th, void* data)
{
	Mat src = *(Mat*)(data);
	Mat dst;
	threshold(src, dst, th, 255, 0);
	imshow("binaryMat", dst);
}

int main()
{
	Mat srcMat;
	Mat gryMat;
	int lowTh = 30;
	int maxTh = 255;

	srcMat = imread("C:\\Users\\Lenovo\\Desktop\\∫Ï–°∂π2.jpg");
	if (!srcMat.data) //≈–∂œÕºœÒ «∑Ò‘ÿ»Î
	{
		std::cout << "ÕºœÒ‘ÿ»Î ß∞‹" << std::endl;
		return 0;
	}

	cvtColor(srcMat, gryMat, CV_BGR2GRAY);
	imshow("change1", gryMat);
	createTrackbar("threshold", "change2", &lowTh, maxTh, threshod_Mat, &gryMat);
	waitKey(0);

	return 0;
}

