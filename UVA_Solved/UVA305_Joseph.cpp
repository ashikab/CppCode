#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

/*		Courtesy : https://saicheems.wordpress.com/2014/05/08/uva-305-joseph/	*/

int circle (int k, int m) 
{
	int i, size = 2 * k;
	int current = (m - 1) % size;
	
	for (i = 0; i < 2 * k; i++) 
	{
		if (current < k) // start killing good guys.
			break;
		size--;
		current = (current + m - 1) % (size);
	}

	return i;
}

int main () 
{
	int k, resultArr[15];

	for (int i = 1; i <= 14; i++) // store the result before calculation.
	{
		for (int j = 1;; j++) 
		{
			if (circle(i, j) == i) 
			{
				resultArr[i] = j;
				break;
			}
		}
	}

	while(scanf("%d",&k))
	{
		if(k == 0)
			break;
		printf("%d\n", resultArr[k]);
	}
	return 0;
}