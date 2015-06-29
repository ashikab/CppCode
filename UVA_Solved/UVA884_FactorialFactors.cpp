//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <cstdlib>
//#define MAX 1000001
//using namespace std;
//
//int factors[1000010];
//
//int getFactorCount (int currentNumber)
//{
//	int factorCount = 0;
//	for(int i = 2; i*i <= currentNumber; i++)
//	{
//		if(currentNumber % i == 0)
//		{
//			while((currentNumber % i) == 0 && (currentNumber / i) > 0)
//			{
//				currentNumber = currentNumber / i;
//				factorCount++;
//			}
//		}
//	}
//	if(currentNumber != 1)
//		factorCount++;
//	return factorCount;
//}
//int main()
//{
//	int num;
//
//	factors[1] = 0;
//
//	for(int i = 2; i < MAX; i++)
//	{
//		factors[i] = getFactorCount(i) + factors[i-1];
//	}
//	while(scanf("%d", &num) != EOF)
//	{
//		printf("%d\n", factors[num]);
//	}
//}