#pragma once
#include "Movie.h"
class MovieSeries
{
private:
	Movie* movies[16];
	unsigned count ;
public:
   void init();
   void add(Movie* ptr);
   void sort();
   void print();
};