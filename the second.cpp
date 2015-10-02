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

int main()
{
}
