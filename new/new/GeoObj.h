#pragma once
#include "stdafx.h"
#include<opencv\highgui.h>
#include<opencv\cv.h>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>



using namespace std;
//
//class GeoObj
//{
//public:
//
//	void Box::draw(IplImage* in);
//};


class Box 
{
public:

	virtual void Box::draw(IplImage* in);
};

class Line : public Box
{
public:

	void Line::draw(IplImage* in);
};


class Pentagon : public Box
{
public:

	void Pentagon::draw(IplImage* in);
};

class Triangle : public Box
{
public:

	void Triangle::draw(IplImage* in);
};

class ThickerLine : public Box
{
public:

	void ThickerLine::draw(IplImage* in);
};

class Circle : public Box
{
public:

	void Circle::draw(IplImage* in);
};

class BoxFilled : public Box
{
public:

	void BoxFilled::draw(IplImage* in);
};

