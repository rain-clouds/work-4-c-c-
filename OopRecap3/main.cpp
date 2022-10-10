// OopRecap3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math.h"
using namespace std;
int main()
{
    Math num;
    float z=num.Add(6, 1, 2, 3, 4, 6, 8);
    cout << z << '\n';
    cout << num.Add("Ana", "Maria");

}

