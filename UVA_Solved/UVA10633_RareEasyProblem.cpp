#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	unsigned long long n, num1, num2;
	while(scanf("%llu", &n) == 1)
	{
		if(n==0)
		{
			break;
		}

		num1 = (n * 10) / 9; // must be a answer
		num2 = num1 - 1;	 // need further checking
		
		if((num2 - (num2 / 10)) == n)
		{
			printf("%llu %llu\n", num2, num1);
		}
		else
		{
			printf("%llu\n", num1);
		}
	}
	return 0;
}