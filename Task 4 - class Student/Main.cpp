#include <iostream>
#include "student.h"
#include "courses.h"
#define _STUDENT_
#define _COURSES_
using namespace std;

int main() 
{
	Student nr1("Andzelika", "Wos", 19, 269423);

	nr1.print();
	changeCourses();

	return 0;
}