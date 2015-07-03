#include<cstdio>
#include <iostream>
#include <stdio.h>
#include<math.h>
#define Pi 2*acos(0.0)
using namespace std;

int main()
{
	int cases;
	scanf("%d",&cases);
	double flagLength, flagWidth, radius, area, pi, redPortion, greenPortion;
	while(cases--)
	{
		scanf("%lf",&flagLength);
		flagWidth = (flagLength * 6) / 10;
		radius = flagLength / 5;

		area = flagLength * flagWidth;
		redPortion = radius * radius * Pi;
		greenPortion = area - redPortion;

		printf("%.2lf %.2lf\n", redPortion, greenPortion);
	}
	return 0;
}