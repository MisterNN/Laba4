#include <iostream> 
using namespace std;

int summation(char string[])
{
	int plusminus = 1;
	int k = 0, sum = 0, number = 0;
	while (*( string + k ) != '\0')
	{
		bool numbertester = isdigit(*( string + k ));
		if (numbertester == true)
		{
			int helper = static_cast<int>(*( string + k )) - 48;
			number = 10 * number + helper;
		}
		else
		{
			sum += number * plusminus;
			number = 0;
			if (*( string + k ) == '+')
			{
				plusminus = 1;
			}
			else
			{
				plusminus = -1;
			}
		}
		if (*( string + 1 + k ) == '\0')
		{
			sum += number * plusminus;
		}
		k++;
	}
	return sum;
}

void assert(char string[], int number)
{
	int result = summation(string);
	if (number == result)
		cout << "OK" << endl;
	else
		cout << "Fail: " << result << " != " << number << endl;
}
int main()
{
	assert("594+65-66+0", 593);
	assert("+594+65-66+0", 593);
	assert("1+2+3+4+5", 15);
	assert("744-114+69", 699);
	assert("744+114+69", 927);
	assert("7-0+3+2", 12);
}

int main()
{
}
