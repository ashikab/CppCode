#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>

#define MAX 1002
using namespace std;

int main()
{	
	int testCase;
	scanf("%d", &testCase);
	while(testCase > 0)
	{	
		int lengthOfIntegers, carry = 0,temp = 0;
		int firstNum[MAX], secondNum[MAX], result[MAX];

		scanf("%d", &lengthOfIntegers);
		for(int i = 0;i<lengthOfIntegers;i++)
		{
			scanf("%d %d",&firstNum[i],&secondNum[i]);
		}
		for(int i = lengthOfIntegers - 1;i >= 0;i--)
		{
			result[temp] = (firstNum[i] + secondNum[i] + carry) % 10;
			carry = (firstNum[i] + secondNum[i] + carry) / 10;
			temp++;
		}

		if(carry == 1)
			result[temp] = 1;

		testCase--;
	}
	return 0;
}
