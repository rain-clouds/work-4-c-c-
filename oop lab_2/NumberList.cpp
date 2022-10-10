#include "NumberList.h"
#include <stdlib.h>
#include<iostream>
using namespace std;
void NumberList::Init()
{
	count = 0;
	
}

bool NumberList::Add(int x)
{
	if (count > 9||x<0||x>10)
		return false;
	else
	{
		numbers[count] = x;
		count++;
		return 1;
	}
}

void NumberList::Sort()
{
	for(int i=0;i<count-1;i++)
		for(int j=i+1;j<count;j++)
			if(numbers[i]>numbers[j])
			{
				int aux;
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		cout << numbers[i] << " ";
}
