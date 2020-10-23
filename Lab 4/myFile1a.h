#pragma once

/***********File : "myFile1a.h"**********/
#include <iostream>
using namespace std;
class Course {
	int num;
	int hours;

public:
	Course(int, int); //constructor
	int getNum(); //read accessor code
	int getHours(); //read accessor to the number of hours
};

Course::Course(int n, int h) {
	num = n;
	hours = h;
}

int Course::getNum() {
	return num;
}

int Course::getHours() {
	return hours;
}