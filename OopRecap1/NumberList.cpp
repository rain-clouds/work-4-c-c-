#include "NumberList.h"
# include<iostream>
using namespace std;
void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	if (count < 10)
	{
		numbers[count] = x;
		count++;
		return 1;
	}
	 return 0;
}

void NumberList::Sort()
{
	for(int i=0; i<count-1;i++)
		for (int j = i + 1; j < count; j++)
		{
			int aux;
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
		}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		cout << numbers[i] << " ";
	cout << '\n';
}
