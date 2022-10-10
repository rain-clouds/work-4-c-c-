// OopRecap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "NumberList.h"
#include "Student.h"
#include "Globals.h"
using namespace std;
int main()
{
  /*  NumberList X;
    X.Init();
    int ok = 1;
    while (ok)
    {
        int x;
        cin >> x;
        ok = X.Add(x);
    }
    X.Print();
    X.Sort();
    X.Print();
    */
    Student Alex, Andrei;
    char m[30];
    strcpy(m, "Alex");
    Alex.setN(m);
    char* x = Alex.getN();
   
    Alex.setE(8.2);
    Alex.setH(3.2);
    Alex.setM(9);
    cout<< x<<" " << Alex.getE() << " " << Alex.getH() << " " << Alex.getM() << " " << Alex.getA()<<"\n";
   strcpy( m , "Andrei");
   Andrei.setE(8);
   Andrei.setH(7);
   Andrei.setM(9); 
   Andrei.setN(m);
   char* y = Andrei.getN();
   cout << y << " " << Andrei.getE() << " " << Andrei.getH() << " " << Andrei.getM() << " " << Andrei.getA() << "\n";
   strcpy(m, "Andrei");

   
   int f1, f2, f3, f4, f5;
   f1= Mat(Alex, Andrei);
   f2=En(Alex, Andrei);
   f3=His(Alex, Andrei);
   f4=Avg(Alex, Andrei);
   f5=Names(Alex, Andrei);
   cout << f1 << " " << f2 << " " << f3 << " " << f4 << " " << f5 << "\n";

}
