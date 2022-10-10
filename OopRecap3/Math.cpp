#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include<string.h>
#include<stdarg.h>
#include<iostream>
int Math::Add(int x, int y)
{
    return (x+y);
}

int Math::Add(int x, int y, int z)
{
    return (x+y+z);
}

int Math::Add(double x, double y)
{
    return (x+y);
}

int Math::Add(double x, double  y, double z)
{
    return (x + y + z);
}

int Math::Mul(int x, int y)
{
    return (x*y);
}

int Math::Mul(int x, int y, int z)
{
    return (x*y*z);
}

int Math::Mul(double x, double y)
{
    return (x*y);
}

int Math::Mul(double x, double y, double z)
{
    return(x*y*z);
}

int Math::Add(int count, ...)
{
    int sum = 0;
    int i;
    va_list vals;
    va_start(vals, count);
    for (i = 0; i < count; i++)
    {
        sum = sum + va_arg(vals, int);
    }
    va_end(vals);
    return sum;
}

char* Math::Add(const char* x, const char* y)
{

    int l;
    l = strlen(x) + strlen(y);
    char* aux = (char*)malloc(l);
    strcpy(aux, x);
    strcat(aux, y);
    return aux;
}
