#define _CRT_SECURE_NO_WARNINGS
#include "Movie.h"
#include<string.h>
#include<time.h>
void Movie::set_name(const char* nume)
{
	auto size = strlen(name);
	if (size > 256)
	{
		name[0] = '\0';
		return;
	}
	strcpy(name, nume);
}

const char* Movie::get_name() const
{
	return name;
}

void Movie::set_score(double nota)
{
	IMDB_score = nota;
}

double Movie::get_score()const
{
	return IMDB_score;
}

void Movie::set_year(unsigned an)
{
	release_year = an;

}

unsigned Movie::get_year()const
{
	return release_year;
}

void Movie::set_length(unsigned lungime)
{
	minutes = lungime;
}

unsigned Movie::get_length()const
{
	return minutes;
}

unsigned Movie::get_passed_years()const
{
	auto t = time(nullptr);
	auto tm = localtime(&t);
	auto current_year = tm->tm_year + 1900;
	return current_year - release_year;
}
