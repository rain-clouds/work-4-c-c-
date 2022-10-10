#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <string.h>

void Student::setN(char s[30])
{
	strcpy(name, s);
}

char* Student::getN()
{
	return name;
}

void Student::setM(float nota)
{
	math = nota;
}

float Student::getM()
{
	return math;
}

void Student::setE(float nota)
{
	eng = nota;
}

float Student::getE()
{
	return eng;
}

void Student::setH(float nota)
{
	hist = nota;
}

float Student::getH()
{
	return hist;
}

float Student::getA()
{
	int y = ((eng + math + hist) / 3.0);
	return y;
}
