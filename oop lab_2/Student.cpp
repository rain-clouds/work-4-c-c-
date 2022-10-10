#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include<iostream>
#include<string.h>

using namespace std;
void Student::SetN(char s[30])
{
   
    strcpy(name, s);
    
}
void Student::SetM(float grade)
{
    if (grade >= 0 && grade <= 10)
        math = grade;
    else cout << "eroare la nota";
}

void Student::SetE(float grade)
{
    if (grade >= 0 && grade <= 10)
        eng = grade;
    else cout << "eroare la nota";
}

void Student::SetH(float grade)
{
    if (grade >= 0 && grade <= 10)
        his = grade;
    else cout << "eroare la nota";
}

char* Student::getN()
{
    return name;
}

float Student::getM()
{
    return math;
}

float Student::getE()
{
    return eng;
}

float Student::getH()
{
    return his;
}

float Student::avrege()
{
    return ((math+eng+his)/3);
}
