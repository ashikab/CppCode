#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

int GCD(int i, int j)
{
	int temp;

	if(j % i == 0)
		return i;
	else
	{
		temp = i;
		i = j % i;
		j = temp;
		GCD(i, j);
	}
}

int main() 
{
	int n, g;
	while(scanf("%d", &n) == 1)
	{
		if(n == 0)
			break;

		g = 0;
		
		for(int i = 1;i < n;i++)
		{
			for(int j = i + 1;j <= n;j++)
			{
				g += GCD(i,j);
			}
		}

		printf("%d\n", g);
	}
	return 0;
}