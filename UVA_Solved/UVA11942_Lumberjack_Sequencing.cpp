//#include <stdio.h>
//#include <iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int n, a[15];
//	printf("Lumberjacks:\n");
//	while(scanf("%d",&n)==1)
//	{
//		while(n--)
//		{
//			int count = 0;
//			for(int i=0;i<10;i++)
//			{
//				scanf("%d",&a[i]);
//			}
//
//
//			if(a[0] > a[1])
//			{
//				count++;
//				for(int i=1;i<9;i++)
//				{
//					if(a[i] > a[i+1])
//					{
//						count++;
//					}
//				}
//			}
//			else if(a[0] < a[1])
//			{
//				count++;
//				for(int i=1;i<9;i++)
//				{
//					if(a[i] < a[i+1])
//					{
//						count++;
//					}
//				}
//			}
//
//			if(count == 9)
//				printf("Ordered\n");
//			else
//				printf("Unordered\n");
//
//		}
//	}
//	return 0;
//}