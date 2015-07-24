#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

bool largeThan9;
int n;
int i_Unit[9] = { 1, 2, 3, 1, 0, 1, 2, 3, 1 };		//count of i from 0 - 9
int v_Unit[9] = { 0, 0, 0, 1, 1, 1, 1, 1, 0 };		//count of v from 0 - 9
int x_Unit[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 1 };		//count of x from 0 - 9
int x_Tenth[10] = { 1, 2, 3, 1, 0, 1, 2, 3, 1};		//count of x from 10 - 90
int l_Tenth[10] = { 0, 0, 0, 1, 1, 1, 1, 1, 0};		//count of l from 10 - 90
int c_Tenth[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 1};		//count of c from 10 - 90
int i[110], v[110], x[110], l[110], c[110];

int main()
{
	i[0] = v[0] = x[0] = l[9] = c[9] = 0;
	for(int num = 1;num <= 99;num++)
	{
		largeThan9 = false;
		int tmp = num;
		bool updateOfX = false;

		while(tmp != 0)
		{
			int index = tmp % 10;
			if(largeThan9 == false)	// If Number <= 9
			{
				if(index > 0)
				{
					i[num] = i[num - 1] + i_Unit[index - 1];
					v[num] = v[num - 1] + v_Unit[index - 1];
					x[num] = x[num - 1] + x_Unit[index - 1];
					
					if(x[num] > x[num - 1]) // case 9, 19, 29 etc
						updateOfX = true;
				}
				else
				{
					// case 10, 20.. etc. In this numbers i and v need not to be updated.
					i[num] = i[num - 1];
					v[num] = v[num - 1];
				}
				tmp = tmp / 10;
				largeThan9 = true; // If Number > 9; it will not consider units array anymore. 
			}
			else   // // If Number > 9
			{
				if(updateOfX == true)
					x[num] = x[num] + x_Tenth[index - 1];	 // Already updated in unit array. So use nth inedx.
				else
					x[num] = x[num - 1] + x_Tenth[index - 1];	// Not updated in unit array. So use (n-1)th inedx.

				l[num] = l[num - 1] + l_Tenth[index - 1];
				c[num] = c[num - 1] + c_Tenth[index - 1];
				tmp = tmp / 10;
			}
		}
	}

	i[100] = i[99];
	v[100] = v[99];
	x[100] = x[99];
	l[100] = l[99];
	c[100] = c[99] + 1;

	while(true) 
	{
		scanf("%d", &n);
		if(n == 0) break;
		printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, i[n], v[n], x[n], l[n], c[n]);
	}
	return 0;
}