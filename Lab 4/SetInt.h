#pragma once
#include <cstdlib> 
#include <iostream>
using namespace std;

class SetInt {
public:
	SetInt() : elem(NULL), size(0) {};
	SetInt(int[], int);
	~SetInt();
	SetInt(const SetInt&); // copy constructor
	void add(int);
	void remove(int);
	bool contains(int);
	int nbElem();
	int* tabElem();
private:
	int* elem;
	int size;
	bool containsAux(int n, int&);
};

SetInt::SetInt(int l[], int s) {
	elem = l;
	size = s;
}

SetInt::~SetInt() {
	delete[] elem;
}

SetInt::SetInt(const SetInt& s) {
	elem = s.elem;
	size = s.size;
}

bool SetInt::contains(int j) {
	for (int i = 0; i < size; i++) {
		if (*(elem + i) == j) return true;
	}
	return false;
}

void SetInt::add(int j) {
	if (!((*this).contains(j))) {
		int* newElem = new int[++size];
		for (int i = 0; i < size - 1; i++) {
			newElem[i] = elem[i];
		}
		newElem[size - 1] = j;
		delete[] elem;
		elem = newElem;
	}
}

void SetInt::remove(int j) {
	if (((*this).contains(j))) {
		int* newElem = new int[--size];
		for (int i = 0, ii = 0; i < size + 1; i++) {
			cout << "i: " << elem[i] << ", j: " << j << ", ii: " << ii << endl;
			if (elem[i] != j) {
				newElem[ii] = elem[i];
				ii++;
			}
		}
		delete[] elem;
		elem = newElem;
	}
}

SetInt::nbElem() {
	return size;
}
int* SetInt::tabElem() {
	return elem;
}

bool SetInt::containsAux(int n, int& p) {
	for (int i = 0; i < size; i++) {
		if (*(elem + i) == n && i == p) return true;
	}
	return false;
};