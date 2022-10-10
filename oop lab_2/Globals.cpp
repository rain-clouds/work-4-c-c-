#include "Globals.h"
#include<string.h>
int compN(Student x, Student y)
{
	return strcmp(x.getN(),y.getN());
	
}

int compM(Student x, Student y)
{
	float grade1, grade2;
	grade1 = x.getM();
	grade2 = y.getM();
	if (grade1 > grade2)
		return 1;
	if (grade1 == grade2)
		return 0;
	return -1;
}

int compE(Student x, Student y)
{
	float grade1, grade2;
	grade1 = x.getE();
	grade2 = y.getE();
	if (grade1 > grade2)
		return 1;
	if (grade1 == grade2)
		return 0;
	return -1;
}

int compH(Student x, Student y)
{
	float grade1, grade2;
	grade1 = x.getH();
	grade2 = y.getH();
	if (grade1 > grade2)
		return 1;
	if (grade1 == grade2)
		return 0;
	return -1;
}

int compA(Student x, Student y)
{
	float grade1, grade2;
	grade1 = x.avrege();
	grade2 = y.avrege();
	if (grade1 > grade2)
		return 1;
	if (grade1 == grade2)
		return 0;
	return -1;
}
