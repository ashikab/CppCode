
  //#include <stdio.h>
//#include <iostream>
//#include<math.h>
//#include<iomanip>
//using namespace std;
//
//int primeArray[101];
//
//
//void updatePrimeArray(int number)
//{
//	// prime array will be updated here
//	int div = 2;
//	while(number!=0)
//	{
//		if(number % div != 0)
//			div = div + 1;
//		else 
//		{
//			primeArray[div]++;
//			number = number / div;
//			if(number == 1)
//				break;
//		}
//	}
//}
//
//int main()
//{
//	int factorialNum, number,tempNum;
//
//	while(scanf("%d",&factorialNum))
//	{
//		if(factorialNum == 0)
//			break;
//
//		int k = 2, newline = 1;
//
//		for(int i = 0; i < 101;i++)
//		{
//			primeArray[i] = 0;
//		}
//
//		tempNum = factorialNum;
//
//		while(factorialNum != 1)
//		{
//			updatePrimeArray(factorialNum);
//			factorialNum = factorialNum - 1;
//		}
//
//		printf("%3d! =",tempNum);
//
//		while(k <= 97)
//		{
//			if(k % 2 != 0)
//			{
//				if(primeArray[k] != 0 )
//				{
//					if(newline % 16 != 0)
//					{
//						printf("%3d",primeArray[k]);
//						newline++;
//					}
//					else
//					{
//						printf("\n%6c",' ');
//						printf("%3d",primeArray[k]);
//						newline = 1;
//					}
//				}
//				k = k + 2;
//			}
//			else
//			{
//				if(primeArray[k] != 0)
//				{
//					newline++;
//					printf("%3d",primeArray[k]);
//				}
//				k++;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}