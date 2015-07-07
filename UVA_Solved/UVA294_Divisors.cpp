#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

long int countDivisor(long int num)
{
	long int temp, count = 0;
	for(long int i = 1;i*i <= num;i++)
	{
		if(num % i == 0)
		{
			temp = num;
			if(i == (temp / i)) // for square numbers.
				count++;
			else
				count += 2; // for normal numbers.
		}
	}
	return count;
}

int main() 
{
	int testCase;
	long int low, up, result, totalDivisor, max;
	scanf("%d", &testCase);

	while(testCase != 0)
	{
		max = 0;

		scanf("%ld%ld", &low, &up);

		for(long int i = low;i <= up;i++)
		{
			totalDivisor = countDivisor(i);
			
			if(totalDivisor > max)
			{
				max = totalDivisor;
				result = i;
			}
		}

		printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", low, up, result, max);
		testCase--;
	}
    return 0;
}