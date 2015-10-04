#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <string.h>
using namespace std;

char* DecToHex (char* str)
{
	char* result; 
	result = new char [100];
	strcpy(result, "");

char *p = str;
int i = 0, num = 0;

while (*(p+i)!='\0')
{
	if (isdigit(*(p + i)))
	{
		int j = 1;
		num = *(p + i) - 48;
		while (isdigit(*(p + i + j)))
		{
			num *= 10;
			num += *(p + i + j) - 48;
			j++;
		}
		char *t;
		char buffer[20];
		_itoa(num, buffer, 16);
		t = buffer;
		strcat(result, "0x");
		strcat(result, t);
		i += j;
	}

	else
	{
		char* copy;
		copy = new char [2];
		copy[0] = *(p + i);
		copy[1] = '\0';
		strcat(result, copy);
		delete[]copy;
		i++;
	}
}
return result;
delete[]result;
}


int main()
{
	return (0);
}

