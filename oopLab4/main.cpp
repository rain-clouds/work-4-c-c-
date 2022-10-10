#include <iostream>
#include "Sort.h"
using namespace std;
int main()
{
	//create the list that needs to be sorted out of random values within a specific interval(min, max)
	Sort a(10, 23, 70);
	a.Print();
	a.BubbleSort(true);
	a.Print();
	cout << '\n';

	//create the list that needs to be sorted from an initialization list
	int arr[] = { 1020, 302, 1, 0 };
	Sort b(arr, 4);
	b.Print();
	b.InsertSort(true);
	b.Print();
	cout << '\n';

	//create the list that needs to be sorted from an existing vector
	Sort c(4, -1, 200, 69, 420);
	c.Print();
	c.QuickSort();
	c.Print();
	cout << '\n';

	//create the list that needs to be sorted using variadic parameters 
	Sort d("24, 35, 26, -1");
	d.Print();
	d.QuickSort(true);
	d.Print();
	cout << '\n';

	//create the list that needs to be sorted from a string
	Sort e({ "-1, 100, 0, 2020" });
	e.Print();
	cout << "List has " << e.GetElementsCount() << " items.\n";
	cout << "Element from index 3: " << e.GetElementFromIndex(2) << endl;
}

