#include "stdafx.h"
#include "GeoObj.h"
#include <opencv2\highgui\highgui.hpp>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv\highgui.h>
#include <opencv\cv.h>
#include <iostream>
#include <atlstr.h>
#include <fstream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2/imgproc/imgproc.hpp>


using namespace cv;
using namespace std;

void Box::draw(IplImage* in)
{
	CvPoint RP1, RP2;
	RP1.x = 150;
	RP1.y = 100;
	RP2.x = 170;
	RP2.y = 120;
	cvRectangle(in, RP1, RP2, CV_RGB(255, 0, 0), 1, 8, 0);
	cvShowImage("Main window", in);
}

void BoxFilled::draw(IplImage* in)
{
	CvPoint RP1, RP2;
	RP1.x = 190;
	RP1.y = 100;
	RP2.x = 210;
	RP2.y = 120;
	cvDrawRect(in,RP1,RP2,CV_RGB(255, 0, 0), -1, 8, 0);
	cvShowImage("Main window", in);
}

void Circle::draw(IplImage* in)
{
	CvPoint RP1, RP2;
	RP1.x = 250;
	RP1.y = 250;
	cvDrawCircle(in, RP1, 250, CV_RGB(255, 0, 0), 1, 8, 0);
	cvShowImage("Main window", in);
}

void Line::draw(IplImage* in)
{
	CvPoint RP1, RP2;
	RP1.x = 220;
	RP1.y = 180;
	RP2.x = 270;
	RP2.y = 200;
	cvDrawLine(in, RP1, RP2, CV_RGB(255, 0, 0), 1, 8, 0);
	cvShowImage("Main window", in);
}

void ThickerLine::draw(IplImage* in)
{
	CvPoint RP1, RP2;
	RP1.x = 200;
	RP1.y = 200;
	RP2.x = 250;
	RP2.y = 220;
	cvDrawLine(in, RP1, RP2, CV_RGB(255, 0, 0), 5, 8, 0);

	cvShowImage("Main window", in);
}

void Triangle::draw(IplImage* in)
{

	cvDrawLine(in, cvPoint(250,250), cvPoint(300, 250), CV_RGB(255, 0, 0), 1, 8, 0);
	cvDrawLine(in, cvPoint(250, 250), cvPoint(275, 300), CV_RGB(255, 0, 0), 1, 8, 0);
	cvDrawLine(in, cvPoint(275,300), cvPoint(300, 250), CV_RGB(255, 0, 0), 1, 8, 0);
	cvShowImage("Main window", in);
}

void Pentagon::draw(IplImage* in)
{
	cvDrawLine(in, cvPoint(160, 360), cvPoint(190, 360), CV_RGB(255, 0, 0), 1, 8, 0);
	cvDrawLine(in, cvPoint(190, 360), cvPoint(200, 400), CV_RGB(255, 0, 0), 1, 8, 0);
	cvDrawLine(in, cvPoint(200, 400), cvPoint(175, 425), CV_RGB(255, 0, 0), 1, 8, 0);
	cvDrawLine(in, cvPoint(175, 425), cvPoint(150, 400), CV_RGB(255, 0, 0), 1, 8, 0);
	cvDrawLine(in, cvPoint(150, 400), cvPoint(160, 360), CV_RGB(255, 0, 0), 1, 8, 0);
	cvShowImage("Main window", in);

}