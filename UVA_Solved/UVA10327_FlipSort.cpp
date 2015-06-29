//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <cstdlib>
//using namespace std;
//
//
//int main()
//{
//	int totalNumberTobeSorted;
//	while(scanf("%d",&totalNumberTobeSorted) == 1)
//	{
//		int numberContainer[1005],tempNum, totalSwap = 0;
//
//		for(int i = 0;i < totalNumberTobeSorted;i++)
//		{
//			scanf("%d",&numberContainer[i]);
//		}
//
//		for(int fromLeft = 0;fromLeft < totalNumberTobeSorted;fromLeft++)
//		{
//			for(int fromRight = totalNumberTobeSorted - 1;fromRight > fromLeft;fromRight--)
//			{
//				if(numberContainer[fromRight] < numberContainer[fromRight - 1]) //do swapping
//				{
//					tempNum = numberContainer[fromRight - 1];
//					numberContainer[fromRight-1] = numberContainer[fromRight];
//					numberContainer[fromRight] = tempNum;
//					totalSwap++;
//				}
//			}
//		}
//		printf("Minimum exchange operations : %d\n", totalSwap);
//
//	}
//	return 0;
//}