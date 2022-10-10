#include "Global.h"
#include <string.h>
int movie_compare_name(const Movie& l, const Movie& r)
{
    return strcmp(l.get_name() , r.get_name());
}

int compare_unsigned(unsigned l, unsigned r)
{
    if (l > r) return 1;
    if (l == r) return 0;
    return -1;
}

int compare_double(double l, double r)
{
    if (l > r) return 1;
    if (l == r) return 0;
    return -1;
}

int movie_compare_year(const Movie& l, const Movie& r)
{
    return compare_unsigned(l.get_year(), r.get_year());
}
int movie_compare_score(const Movie& l, const Movie& r)
{
    return compare_double(l.get_score(),r.get_score());
}
int movie_compare_length(const Movie& l, const Movie& r)
{
    return compare_unsigned(l.get_length(), r.get_length());
}
int movie_compare_passed_years(const Movie& l, const Movie& r)
{
    return compare_unsigned(l.get_passed_years(), r.get_passed_years());
}
