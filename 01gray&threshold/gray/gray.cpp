#include "pch.h"
#include <iostream>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main()
{
	/*读灰度图像*/
	Mat mat = imread("..//..//pictures//01flower.jfif", IMREAD_GRAYSCALE);
	/*显示灰度图像*/
	imshow("flower", mat);

	/*二值化*/
	Mat thresholdResult;
	threshold(mat, thresholdResult, 100, 255, ThresholdTypes::THRESH_BINARY);
	imshow("threshold", thresholdResult);
	
	waitKey();

	return 0;
}
