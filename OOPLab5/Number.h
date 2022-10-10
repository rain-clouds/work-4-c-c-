#pragma once
#pragma once
using namespace std;
class Number
{
	int base;
	char* value;
	bool negative;

public:
	Number(const char* value, int base); // where base is between 2 and 16
	~Number();
	Number(const Number& n);
	Number(const Number&& n);
	Number(const int);
	// add operators and copy/move constructor
	char operator[] (int i);
	friend Number operator+ (const Number& x, const Number& y);
	friend Number operator- (const Number& x, const Number& y);
	bool operator> (Number& n);

	void operator= (const char*);
	void operator= (const Number& n);
	void operator= (int n);

	void operator+= (Number& n);

	void operator-- ();
	void operator-- (int);
//----------------------------------------------------


	void SwitchBase(int newBase);

	void Print();

	int GetDigitsCount();

	int GetBase();

	long long getBaseTen();

	long long convertToBaseTen(const char* s, int base);

	char* convertToBase(long long n, int base);

	int normalizeDigit(char c);

	char formalizeDigit(int n);

	/*void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base*/
};
/*
add the following operators: addition, subtraction, negate, index operator, relation operators (> , < , >= , <=, ==, etc)
add copy & move constructors and move assignment operator
when performing operations with two Number object that have a different  base, the result (except for the relation and index operators) will have the biggest base of the two Number instances.
for addition and subtraction use friend functions
implement the -- operator with the following syntax: if used in a prefix form it will remove the first (most significant digit) from the number; if used in a post-fix form it will remove the last (least significant) digit from the number;*/
char* toString(long long );
void copyString(char*, char*);
