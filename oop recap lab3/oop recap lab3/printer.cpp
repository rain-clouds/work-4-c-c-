#define _CRT_SECURE_NO_WARNINGS
#include "printer.h"
#include<stdio.h>
#include<cstdarg>
#include<string.h>
void Printer::print_add(int x, int y)
{
	printf("%d\n", x + y);
}

void Printer::print_add(int x, int y, int z)
{
	printf("%d\n", x + y + z);
}

void Printer::print_add(double x, double y)
{
	printf("%f\n", x + y);
}

void Printer::print_add(double x, double y, double z)
{
	printf("%f\n", x + y+ z);

}

void Printer::print_add(int count, ...)
{
	va_list args;
	va_start(args, count);

	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	printf("%d\n", sum);
}

void Printer::print_add(const char* x, const char* y)
{
	if (x)
	{
		x = "";
	}
	if (y)
	{
		y = "";
	}
	char* ptr = new char[strlen(x) + strlen(y) + 1];
	strcpy(ptr, x);
	strcat(ptr, y);
	printf("%s\n", ptr);
	delete[] ptr;

}
