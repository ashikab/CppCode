#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

/****************** Algorithm ******************************************
	1 = happy.
	2 = 4 = 16 = 37 = 58 = 89 = 145 = 42 = 20 = 4 = cycle = unhappy
	3 = 9 = 81 = 65 = 61 = 37(look at 2) = cycle = unhappy
	4 = 16 = 37 = cycle = unhappy
	5 = 25 = 29 = 85 = 89(look at 2) = cycle = unhappy
	6 = 36 = 45 = 41 = 17 = 50 = 25(look at 5) = cycle = unhappy
	7 = 49 = 97 = 130 = 10 = 1 = happy
	8 = 64 = 52 = 29(look at 5) = cycle = unhappy
	9 = 81(look at 3) = cycle = unhappy
************************************************************************/

int main() 
{
	long int finalNum, num, sum, testCase, caseNum = 1;
	scanf("%ld", &testCase);
	while(caseNum <= testCase)
	{
		scanf("%ld", &num);
		finalNum = num;
		sum = 0;

		while(true)
		{
			if((sum != 0) && (sum < 10))
			{
				if(sum == 1 || sum == 7)
				{
					printf("Case #%ld: %ld is a Happy number.\n", caseNum, finalNum);
					break;
				}
				else
				{
					printf("Case #%ld: %ld is an Unhappy number.\n", caseNum, finalNum);
					break;
				}
			}
			else
			{
				sum = 0;
				while(num !=0 )
				{
					sum += (num % 10) * (num % 10);
					num = num / 10;
				}
				num = sum;
			}
		}
		
		caseNum++;
	}
	return 0;
}