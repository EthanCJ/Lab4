#pragma once
#include "myFile1a.h"
/***********File : "myFile1b.h"**********/

class Student {
	int numID;
	int nbCourses=0;
	int maxCourses;
	int* List_grades;
	Course **List_courses;

public:
	Student(int, int); //constructor
	~Student(); //destructor
	double average();
	int totalHours();
	bool addCourse(Course*, int);
};



//Constructor
Student::Student(int x, int y) {
	numID = x;
	maxCourses = y;
	List_grades = new int[maxCourses];
	List_courses=new Course*[maxCourses];
}



//Destructor
Student::~Student(){
	delete List_grades, List_courses;
}



double Student::average() {
	int temp=0;
	for (int x = 0; x < nbCourses;x++) {
		temp += List_grades[x];
	}
	return double(temp/nbCourses);

	return 0;
}



int Student::totalHours() {
	int temp = 0;
	for (int x = 0; x < nbCourses; x++) {
		temp += 1;
		//temp += List_courses[x].getHours();
	}
	return temp;
}



bool Student::addCourse(Course* c, int x) {
	if (nbCourses==maxCourses) {
		return false;
	}
	//*List_courses[nbCourses]=*c;
	List_grades[nbCourses] = x;
	nbCourses++;
	return true;
}