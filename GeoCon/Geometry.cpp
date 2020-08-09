#include "stdafx.h"
#include "pch.h"
using namespace System;

#include "Geometry.h"

Point::Point()
{
	Console::WriteLine("Point constructor claled");
}

Point::~Point()
{
	Console::WriteLine("Point destructor called");
}

Rectangle::Rectangle()
{
	Console::WriteLine("Rectangle constructor claled");
}

Rectangle::~Rectangle()
{
	Console::WriteLine("Rectangle destructor called");
}