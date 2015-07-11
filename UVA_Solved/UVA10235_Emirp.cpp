#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

bool isPrime(long int num)
{
	for(int i = 2;i*i <= num;i++)
	{
		if(num % i == 0)
			return false;
	}
	return true;
}

int reverse(long int num)
{
	long int number = 0;
	while(num != 0)
	{
		number = number * 10 + num % 10;
		num = num / 10;
	}
	return number;
}

int main()
{
	long int num;

	while(scanf("%d", &num) == 1)
	{
		if(isPrime(num)) // it is a prime
		{
			long int revNum = reverse(num);
			if(isPrime(revNum) && (revNum != num)) // 373, 101 etc
 			{
				printf("%ld is emirp.\n", num);
			}
			else
				printf("%ld is prime.\n", num);
		}
		else
			printf("%ld is not prime.\n", num);
	}

	return 0;
}