#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>

using namespace std;

int to_number(const char* string)
{
int result = 0;

for (unsigned i = 0; string[i] != '\0'; i++)
result = result * 10 + string[i] - '0';

return result;
}

int main()
{
	

	auto file = fopen("ini.txt", "r");
	if (file == nullptr)
	{
		printf("eroare fopen\n");
		return 1;
	}
	int s = 0;
	while (!feof(file))
	{
		
		char line[128];
		fgets(line, sizeof(line), file);
		auto size = strlen(line);
		if (line[size - 1] == '\n')
			line[size - 1] = '\0';

		auto number = to_number(line);
		s += number;
	}
	fclose(file);
	printf("%d", s);

	return 0;
}