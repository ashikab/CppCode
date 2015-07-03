#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	int testCase, allowence = 0;
	scanf("%d", &testCase);
	for(int i = 0;i < testCase;i++)
	{
		double length, width, depth, weight;
		scanf("%lf %lf %lf %lf", &length, &width, &depth, &weight);
		
		if(((length <= 56.00) && (width <= 45.00) && (depth <= 25.00)))
		{
			if(weight <= 7.00 && ((length + width + depth) <= 125.00))
			{	
				cout << "1" << endl;
				allowence++;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else
		{
			if(weight <= 7.00 && ((length + width + depth) <= 125.00))
			{
				cout << "1" << endl;
				allowence++;
			}
			else
				cout << "0" << endl;
		}
	}
	cout << allowence<<endl;
	return 0;
}