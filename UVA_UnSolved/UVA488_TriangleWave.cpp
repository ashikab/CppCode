//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int testcase;
//	scanf("%d",&testcase);
//	while(testcase > 0)
//	{
//		int amplitude, frequency;
//		scanf(" %d %d", &amplitude, &frequency);
//		
//		while(frequency != 0)
//		{
//			bool flag = false;
//			for(int i=1;i<=amplitude;i++)
//			{
//				int temp = i, counter = i;
//				while(counter != 0)
//				{
//					if(temp != amplitude) // upper row
//					{
//						int k = temp;
//						while(k != 0)
//						{
//							printf("%d",temp);
//							k--;
//							counter--;
//						}
//
//						if(flag == true)
//						{
//							temp--;
//							counter = temp;
//						}
//						printf("\n");
//					}
//					else // central and lower row
//					{
//						int k = temp;
//						while(k != 0)
//						{
//							printf("%d",temp);
//							counter--;
//							k--;
//						}
//						counter = amplitude - 1;
//						temp = counter;
//						flag = true;
//						printf("\n");
//						//counter--;
//					}
//				}
//			}
//			if(frequency > 1) printf("\n");
//			frequency--;
//		}
//		testcase--;
//	}
//	return 0;
//}