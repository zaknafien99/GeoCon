#pragma once
using namespace System;

ref class Point
{
public:
	Point();	//default constructor
	~Point();	//default destructor
};

ref class Rectangle
{
	Point p1, p2;

public:
	Rectangle();
	~Rectangle();
};