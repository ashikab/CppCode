//#include<stdio.h>
//int main()
//{
//	long int num1, num2;
//	while(scanf("%lu %lu",&num1,&num2) && ((num1 != 0) || (num2 != 0)))
//	{
//		int carry = 0, answer = 0, checker = 0;
//
//		if(num1 <= 999999999 && num2 <= 999999999)
//		{
//			if((num1 == 0) || (num2 == 0))
//			{
//				checker = 1;
//				printf("No carry operation.\n");
//			}
//			else
//			{
//				while (num1 != 0 || num2 != 0)
//				{
//					if ((num1 % 10) + (num2 % 10) + carry >= 10)
//					{
//						carry = 1;
//						answer++;
//						num1 = num1/10;
//						num2 = num2/10;
//					}
//					else
//					{
//						carry = 0;
//						num1 = num1/10;
//						num2 = num2/10;
//					}
//				}
//			}
//			
//			if(answer == 0 && checker == 0)
//			{
//				printf("No carry operation.\n");
//			}
//			else if(answer == 1)
//			{
//				printf("1 carry operation.\n");
//			}
//			else if(checker == 0)
//			{
//				printf("%d carry operations.\n",answer);
//			}
//		}
//	}
//	return 0;
//}