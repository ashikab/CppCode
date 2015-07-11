#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int caseNum, testcase;
	double Celsius, change;
	scanf("%d", &testcase);
	for(caseNum = 1;caseNum <= testcase;caseNum++)
	{
		scanf("%lf %lf", &Celsius, &change);
		change = (change * (double)5) / (double)9;
		Celsius += change;
		printf("Case %d: %.2lf\n",caseNum,Celsius);
	}
	return 0;
}