#pragma once
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <iostream>
#include <initializer_list>

using namespace std;

class Sort
{
	vector <int> list;
	int partition(bool, int, int);
	void quicksort(bool, int, int);
public:
	Sort(int, int, int);
	Sort(initializer_list<int> l) : list(l) {}
	Sort(int v[], int n);
	Sort(int n, ...);
	Sort(const char*);
	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int  GetElementsCount();
	int  GetElementFromIndex(int index);
};