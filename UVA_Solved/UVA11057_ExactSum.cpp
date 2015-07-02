#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#define MAX 10005
using namespace std;
/******************************************************************
						Algorithm
******************************************************************/
int main() 
{
	int totalBook, pocketMoney, totalPrice, diff, priceArr[MAX];
	while(scanf("%d",&totalBook) != EOF)
	{
		int priceOfFirst, priceOfSecond, k = 0, minDiff = 999999999;

		for(int i = 0;i < totalBook;i++)
		{
			scanf("%d", &priceArr[i]);
		}

		scanf("%d",&pocketMoney);

		for(int i = 0;i <= totalBook - 1;i++)
		{
			while(priceArr[i] >= pocketMoney) // If this price is more than pocket money, skip it.
			{
				i++;
			}
			for(int j = i + 1;j < totalBook;j++) // find out all possible combination of prices
			{
				totalPrice = priceArr[i] + priceArr[j];
				if(totalPrice == pocketMoney)
				{
					diff = abs(priceArr[i] - priceArr[j]);
					if(diff < minDiff) // take the books with minimum price difference
					{
						priceOfFirst = priceArr[i];
						priceOfSecond = priceArr[j];
						minDiff = diff;

						if(priceOfFirst > priceOfSecond)
						{
							priceOfFirst = priceArr[j];
							priceOfSecond = priceArr[i];
						}
					}
				}
			}
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n", priceOfFirst, priceOfSecond);
	}
	return 0;
}