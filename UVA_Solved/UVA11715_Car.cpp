#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int test_case, count=0;
	double u, v, a, s, t;
	while(scanf("%d", &test_case)==1)
	{
		if(test_case == 0) break;
		
		count++;
		
		if(test_case == 1)
		{
			scanf(" %lf %lf %lf", &u, &v, &t);
			a = (v - u) / t;
			s = u * t + (a * t * t) / 2;
			printf("Case %d: %.3lf %.3lf\n", count, s, a);
		}
		else if(test_case == 2)
		{
			scanf(" %lf %lf %lf\n", &u, &v, &a);
			t = (v - u) / a;
			s = u * t + (a * t * t) / 2;
			printf("Case %d: %.3lf %.3lf\n", count, s, t);
		}
		else if(test_case == 3)
		{
			scanf(" %lf %lf %lf\n", &u, &a, &s);
			v = sqrt((u * u) + 2 * a * s);
			t= (v - u) / a;
			printf("Case %d: %.3lf %.3lf\n", count, v, t);
		}
		else if(test_case == 4)
		{
			scanf(" %lf %lf %lf", &v, &a, &s);
			u = sqrt((v * v) - 2 * a * s);
			t = (v - u) / a;
			printf("Case %d: %.3lf %.3lf\n", count, u, t);
		}
	}
}