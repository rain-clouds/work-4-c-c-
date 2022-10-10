#define _CRT_SECURE_NO_WARNINGS
#include "Phrase.h"
#include <string.h>
#include<iostream>
Phrase::Phrase(const char*sir)
{//pune in dictionar
	char space;
	vocale=consoane=litera=words = 0;
	char copie[300];
	strcpy(copie, sir);
	char *p;
	p = strtok(copie," ");
	while (p)
	{
		strcpy(dict[words], p);
		words++;
		p = strtok(NULL, " ");
	}

}

Phrase::~Phrase()
{
	std::cout << "terminated";
}

int Phrase::countVowels()
{
	int number = 0;
	for (int i = 0; i < words; i++)
	{
		int n = strlen(dict[i]);
		for (int j = 0; j < n; j++)
			if (dict[i][j] == 'a')//sau i, o etc, nu am timp
				number++;
	}
	return number;

}
