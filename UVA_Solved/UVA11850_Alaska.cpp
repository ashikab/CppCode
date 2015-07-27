#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int n, returnDistance, miles[2000];
	bool flag;

    while (scanf("%d",&n) && n)
    {
		flag = true;
		returnDistance = 0;
        for(int i = 0;i < n;i++)
		{
			scanf("%d", &miles[i]);
		}

		sort(miles, miles + n);

		for(int i = 1;i < n;i++)
		{
			if(miles[i] - miles[i - 1] > 200)
			{
				flag = false;
				break;
			}
		}
		
		returnDistance = 2 * (1422 - miles[n - 1]); // 2 * Distance betn last station and destination.
		
		if(returnDistance > 200)	// If this distance is large than 200, it can't return.
			printf("IMPOSSIBLE\n");
		else if (flag)
			printf("POSSIBLE\n");
        else
			printf("IMPOSSIBLE\n");
    }
    return 0;
}