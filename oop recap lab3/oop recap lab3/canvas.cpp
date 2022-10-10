#define _CRT_SECURE_NO_WARNINGS
#include "canvas.h"
#include<stdio.h>
#include<cstdarg>
#include<string.h>
Canvas::Canvas(int lines, int columns)
{
	this->lines = lines;
	this->columns = columns;
	clear();
}

void Canvas::set_pixel(int x, int y, char value)
{
	if (!(0 <= x && x < 128) || !(0 <= y && y < 128))
	{
		return;
	}
	matrix[x][y] = value;
}

void Canvas::set_pixels(int count, ...)
{
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; ++i)
	{
		int x = va_arg(args, int);
		int y = va_arg(args, int);
		char value = va_arg(args, int);
		set_pixel(x, y, value);
	}
	
	va_end(args);
	

}

void Canvas::clear()
{
	memset(matrix,' ',sizeof(matrix));
	/*for(int i=0;i<lines;i++)
	for (int j = 0; j < columns; j++)
	{
		matrix[i][j] = ' ';
	}
	*/
}

void Canvas::print() const
{
	for (int i = 0; i < lines; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}
}
