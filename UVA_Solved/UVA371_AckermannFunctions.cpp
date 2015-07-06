#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <math.h>
using namespace std;

int main() 
{
	long int low, high, value, number, max;
	bool moreOperation;

	while(scanf("%ld%ld",&low, &high))
	{
		max = 0;

		if(low == 0 && high == 0)
		{
			break;
		}
		else
		{
			if(low > high)
				swap(low, high);

			for(long int i = low;i <= high;i++)
			{
				long int operation = 0, temp = i;
				moreOperation = true;

				while (moreOperation == true)
				{
					if(temp % 2 == 0)
					{
						temp = temp / 2;
					}
					else
					{
						temp = 3 * temp + 1;
					}
					
					operation++;
					
					if(temp == 1)
						moreOperation = false;
				}

				if(operation > max)
				{
					number = i;
					max = operation;
				}
			}
		}

		printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", low, high, number, max);
	}
    return 0;
}