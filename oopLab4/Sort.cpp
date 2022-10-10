#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

Sort::Sort(int n, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		list.push_back(rand() % (max - min + 1) + min);
}

Sort::Sort(int v[], int n) {
	for (int i = 0; i < n; i++) list.push_back(v[i]);
}

Sort::Sort(int n, ...) {
	va_list vl;
	va_start(vl, n);
	for (int i = 0; i < n; i++)
		list.push_back(va_arg(vl, int));
	va_end(vl);
}

Sort::Sort(const char* string) {
	char* newstring = _strdup(string);
	char* currentnr = strtok(newstring, ",");
	while (currentnr != NULL) {
		list.push_back(strtol(currentnr, nullptr, 10));
		currentnr = strtok(nullptr, ",");
	}
}



void Sort::Print() {
	for (int i = 0; i < list.size(); i++)
		cout << list[i] << ' ';
	cout << endl;
}

int Sort::GetElementsCount() {
	return list.size();
}

int Sort::GetElementFromIndex(int index) {
	if (index<0 || index>list.size() - 1) {
		cout << "\nInvalid index!\n";
		return 0;
	}
	return list[index];
}

void Sort::InsertSort(bool ascendent) {
	int i, key, j;
	if (ascendent) {
		for (i = 1; i < list.size(); i++)
		{
			key = list[i];
			j = i - 1;

			while (j >= 0 && list[j] > key)
			{
				list[j + 1] = list[j];
				j = j - 1;
			}
			list[j + 1] = key;
		}
	}
	else {
		for (i = 1; i < list.size(); i++)
		{
			key = list[i];
			j = i - 1;

			while (j >= 0 && list[j] < key)
			{
				list[j + 1] = list[j];
				j = j - 1;
			}
			list[j + 1] = key;
		}
	}
}

int Sort::partition(bool ascendent, int low, int high) {
	int pivot = list[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (ascendent) {
			if (list[j] < pivot)
			{
				i++;
				swap(&list[i], &list[j]);
			}
		}
		else {
			if (list[j] > pivot)
			{
				i++;
				swap(&list[i], &list[j]);
			}
		}
	}
	swap(&list[i + 1], &list[high]);
	return (i + 1);
}

void Sort::quicksort(bool ascendent, int low, int high) {
	if (low < high)
	{
		int pi = this->partition(ascendent, low, high);

		this->quicksort(ascendent, low, pi - 1);
		this->quicksort(ascendent, pi + 1, high);
	}
}

void Sort::QuickSort(bool ascendent) {
	this->quicksort(ascendent, 0, list.size() - 1);
}

void Sort::BubbleSort(bool ascendent) {
	int i, j;
	for (i = 0; i < list.size() - 1; i++)
		for (j = 0; j < list.size() - i - 1; j++) {
			if (ascendent) {
				if (list[j] > list[j + 1])
					swap(&list[j], &list[j + 1]);
			}
			else {
				if (list[j] < list[j + 1])
					swap(&list[j], &list[j + 1]);
			}
		}
}
