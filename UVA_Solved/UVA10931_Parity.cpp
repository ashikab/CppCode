//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
//int main()
//{
//	unsigned long int number;
//	int oneCount, index, numArr[1000];
//	while(scanf("%lu", &number) == 1)
//	{
//		if(number == 0)
//			break;
//		else
//		{
//			oneCount = 0, index = 0;
//			while(number != 0)
//			{
//				if(number % 2 == 1)
//				{
//					oneCount++;
//				}
//				numArr[index] = number % 2;
//				number = number / 2;
//				index++;
//			}
//
//			printf("The parity of ");
//
//			for(int k = index - 1;k >= 0;k--)
//			{
//				printf("%d",numArr[k]);
//			}
//
//			printf(" is %d (mod 2).\n", oneCount);;
//		}
//	}
//	return 0;
//}
