//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//
//int getSum(int number)
//{
//	int sum = 0;
//	while(number != 0)
//	{
//		sum += number % 10;
//		number = number / 10;
//	}
//
//	if(sum < 10)
//	{
//		return sum;
//	}
//	else
//	{
//		getSum(sum);
//	}
//}
//
//int main()
//{
//	int number, sum;
//	while(scanf("%d",&number) && number)
//	{
//		sum = getSum(number);
//		printf("%d\n", sum);
//	}
//	return 0;
//}