#pragma once
#include <iostream>
#define _COURSES_
using namespace std;

int changeCourses()
{
	string courses[3] = { "Math, ", "Programming, ", "3D " };
	cout << "Courses: ";
	for (int i = 0; i < 3; i++) 
	{
		cout << courses[i];
	}

	return 0;
}


