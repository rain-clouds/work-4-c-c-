#pragma once
class Movie
{
private:
	char name[256];
	unsigned release_year,minutes,passed_years;
	double IMDB_score;
public:
	void set_name(const char *nume);
	const char* get_name() const ;
	void set_score(double nota);
	double get_score() const;
	void set_year(unsigned an);
	unsigned get_year() const;
	void set_length(unsigned lungime);
	unsigned get_length() const;
	unsigned get_passed_years() const;

	






};