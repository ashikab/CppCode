#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#define MAX 1005
using namespace std;

int main() 
{
	int testCase, totalDay, saleEachDay[MAX];
	scanf("%d", &testCase);

	while(testCase != 0)
	{
		int res = 0;
		int saleLargeOrEqualPreviousDay[MAX] = {0};

		scanf("%d", &totalDay);
		
		for(int i = 0;i < totalDay;i++)
		{
			scanf("%d", &saleEachDay[i]);
		}

		for(int i = 1;i < totalDay;i++)
		{
			for(int j = i - 1;j >= 0;j--) // check with all previous elements
			{
				if(saleEachDay[i] >= saleEachDay[j]) // if large than previous day, increase value
				{
					saleLargeOrEqualPreviousDay[i - 1]++;
				}
			}
		}

		for(int i = 0;i < totalDay;i++)
		{
			res += saleLargeOrEqualPreviousDay[i];
		}

		printf("%d\n", res);
		testCase--;
	}
    return 0;
}