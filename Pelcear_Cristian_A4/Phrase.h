#pragma once

class Phrase
{
private:
	int vocale, consoane, litera;
	int words;
	char dict[100][100];
public:
	Phrase(const char*sir);
	
	~Phrase();
	int countVowels();
};