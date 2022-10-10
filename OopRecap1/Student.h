#pragma once
class Student {
private:
	float math, hist, eng, avg;
	char name[30];

public:
	void setN(char s[30]);

	char* getN();

	void setM(float nota);

	float getM();

	void setE(float nota);

	float getE();

	void setH(float nota);

	float getH();
	
	float getA();
};