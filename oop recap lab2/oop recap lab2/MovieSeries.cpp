#define _CRT_SECURE_NO_WARNINGS
#include "MovieSeries.h"
#include<stdio.h>
#include<algorithm>
void MovieSeries::init()
{
	count = 0;
}

void MovieSeries::add(Movie* ptr)
{
	if (count == 16)
	{
		return;
	}

	movies[count] = ptr;
	count++;

}
bool cmp(const Movie* a, const Movie* b)
{
	return a->get_passed_years() > b->get_passed_years();

}

void MovieSeries::sort()
{
	std::sort(movies, movies + count, cmp);
}

void MovieSeries::print()
{
	for (int i = 0; i < count; i++)
	{
		auto current = movies[i];
		printf(R"(
name:          %s
year:          %u
length:        %u
score:         %f
passed years:  %u)",
current->get_name(), current->get_year(),
current->get_length(), current->get_score(),
current->get_passed_years()

);


	}
}
