#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#define MAX 9876543210
#define VACANT -1
using namespace std;

bool select(long long num)
{
	int arr[10];
	int temp;

	for(int i = 0;i < 10;i++)
	{
		arr[i] = VACANT;
	}

	while(num != 0)
	{
		temp = num % 10;
		num = num / 10;
		
		if(arr[temp] != VACANT) // If this place is already occupied, return false.
			return false;
		else
		{
			arr[temp] = temp;
		}
	}
	return true;
}

int main()
{
	int caseNum;
	long long numOne, numTwo;
	
	scanf("%d", &caseNum);
	for (int test = 1; test <= caseNum; test++)
	{
		if (test > 1)
			cout << endl;
		
		scanf("%lld", &numOne);
		numTwo = MAX / numOne;

		for (long long i = 1; i <= numTwo; i++)
		{
			long long n = i * numOne;
			
			if (select(i) && select(n))
			{
				printf("%lld / %lld = %lld\n", n, i, numOne);
			}
		}
	}
	return 0;
}
