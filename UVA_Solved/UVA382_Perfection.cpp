//#include <stdio.h>
//#include <iostream>
//#include<math.h>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int Num;
//	printf("PERFECTION OUTPUT\n");
//	while(scanf("%d",&Num) == 1)
//	{
//		int factorOne = 2, factorTwo, sum = 1;
//		if(Num == 0)
//			break;
//		else
//		{
//			while((factorOne * factorOne) <= Num)
//			{
//				if(Num % factorOne == 0)
//				{
//					factorTwo = Num/factorOne;
//					if(factorOne != factorTwo)
//						sum = sum + factorOne + factorTwo;
//					else
//						sum = sum + factorOne;
//				}
//				factorOne++;
//			}
//		}
//
//		if(Num == 1)
//		{
//			printf("%5d  DEFICIENT\n",Num);
//		}
//		else if(sum == Num)
//		{
//			printf("%5d  PERFECT\n",Num);
//		}
//		else if(sum < Num)
//		{
//			printf("%5d  DEFICIENT\n",Num);
//		}
//		else
//		{
//			printf("%5d  ABUNDANT\n",Num);
//		}
//	}
//	printf("END OF OUTPUT\n");
//	return 0;
//}
//