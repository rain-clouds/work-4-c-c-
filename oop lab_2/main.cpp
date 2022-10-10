// oop lab_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "NumberList.h"
//#include"Student.h"
#include "Globals.h"
#include <string.h>
using namespace std;
int main()
{
  /*
     NumberList x;
     x.Init();
	 if (x.Add(20) != 1)
		 printf("Maximum limit exceeded\n");
	 
		 if (x.Add(8) != 1)
			 printf("Maximum limit exceeded\n");
		 
			 if (x.Add(15) != 1)
				 printf("Maximum limit exceeded\n");
			 
				 if (x.Add(5) != 1)
					 printf("Maximum limit exceeded\n");
     x.Sort();
     x.Print();

     system("pause");*/

	Student Mara, David;
	char nume[30],s[30];
	float mate, engleza, istorie;
	 strcpy(nume,"Mara");
	 mate = 6.5;
	 engleza = 10;
	 istorie = 8;
	 Mara.SetN(nume);
	 Mara.SetM(mate);
	 Mara.SetE(engleza);
	 Mara.SetH(istorie);

	 strcpy(s, Mara.getN());
	 cout << s << " ";
	 mate = Mara.getM();
	 cout << mate << " ";
	 mate = Mara.getE();
	 cout << mate << " ";
	 mate = Mara.getH();
	 cout << mate << " ";
	 mate = Mara.avrege();
	 cout << mate << " ";

	 strcpy(nume, "David");
	 mate = 8;
	 engleza = 10;
	 istorie = 6;
	 David.SetN(nume);
	 David.SetM(mate);
	 David.SetE(engleza);
	 David.SetH(istorie);

	 int f1, f2, f3, f4, f5;
	 f1 = compN(Mara, David);
	 f2 = compM(Mara, David);
	 f3 = compE(Mara, David);
	 f4 = compH(Mara, David);
	 f5 = compA(Mara, David);
	 cout << f1 << "   " << f2 << "   " << f3 << "   " << f4 << "   " << f5;


}
