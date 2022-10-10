#include "Globals.h"
#include <string.h>
int Mat(Student x, Student y)
{
    float nota1, nota2;

    nota1 = x.getM();
    nota2 = y.getM();

    if (nota1 > nota2)
        return 1;
    if (nota1 == nota2)
        return 0;
    return -1;

}

int His(Student x, Student y)
{
    float nota1, nota2;

    nota1 = x.getH();
    nota2 = y.getH();

    if (nota1 > nota2)
        return 1;
    if (nota1 == nota2)
        return 0;
    return -1;
}

int En(Student x, Student y)
{
    float nota1, nota2;

    nota1 = x.getE();
    nota2 = y.getE();

    if (nota1 > nota2)
        return 1;
    if (nota1 == nota2)
        return 0;
    return -1;
}

int Avg(Student x, Student y)
{
    float nota1, nota2;

    nota1 = x.getA();
    nota2 = y.getA();

    if (nota1 > nota2)
        return 1;
    if (nota1 == nota2)
        return 0;
    return -1;
}

int Names(Student x, Student y)
{
    return strcmp(x.getN(),y.getN());
}

