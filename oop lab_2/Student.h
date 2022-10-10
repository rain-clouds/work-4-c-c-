#pragma once
class Student
{
private:
	float math, eng, his;
	char name[30];
public:
	void SetN(char s[30]);
	void SetM(float grade);
	void SetE( float grade);
	void SetH(float grade);
	char* getN();
	float getM();
	float getE();
	float getH();
	float avrege();
};