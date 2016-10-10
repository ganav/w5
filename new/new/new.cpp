// week5.cpp : Defines the entry point for the console application.
//

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


Box* _box = new Box();
Box* _line = new Line();
Pentagon* _pentagon = new Pentagon();
Triangle* _tri = new Triangle();
ThickerLine* _thLine = new ThickerLine();
BoxFilled* _fbox = new BoxFilled();
Circle* _circ = new Circle();

void main()
{
	IplImage* BG_img = cvCreateImage(cvSize(500, 500), 8, 3);
	cvSet(BG_img, cvScalar(255, 255, 255), 0);//white background

	vector<Box*> my_vect;

	my_vect.push_back(new Box());
	my_vect.push_back(new Line());
	my_vect.push_back(new Pentagon());
	my_vect.push_back(new Triangle());
	my_vect.push_back(new ThickerLine());
	my_vect.push_back(new BoxFilled());
	my_vect.push_back(new Circle());


	for (int i = 0; i < 7;i++)
		my_vect.at(i)->draw(BG_img);


	waitKey(0);

}

