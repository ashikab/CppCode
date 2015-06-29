//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<iostream>
//#include<sstream>
//#include<utility>
//using namespace std;
//
//
///****************** Algorithm****************************************************
////		*																				 *
////		*	http://www.geeksforgeeks.org/find-missing-number-arithmetic-progression/	 *
////		*																				 *
////		**********************************************************************************/
//
//
//int findMissingNum(int numArray[], int low, int high, int diff)
//{
//	if (high <= low)
//		return -1;
//	int mid = low + (high - low) / 2;
//
//	if(numArray[mid + 1] - numArray[mid] != diff)
//	{
//		return (numArray[mid] + diff);
//	}
//
//	if(numArray[mid] - numArray[mid - 1] != diff)
//	{
//		return (numArray[mid] - diff);
//	}
//
//	if(numArray[mid] != (numArray[0] + diff * mid)) // Missing number lies in 0 - mid
//	{
//		return findMissingNum(numArray, low, mid, diff);
//	}
//
//	return findMissingNum(numArray, mid + 1, high, diff);
//}
//
//int main()
//{
//	while(true)
//	{
//		int totalNumberOfInput, diff, numArray[100];
//		printf("How many number are there : ");
//		scanf("%d", &totalNumberOfInput);
//		
//		for(int k = 0;k < totalNumberOfInput;k++) // Print sorted number...
//		{
//			scanf("%d",&numArray[k]);
//		}
//
//		diff = (numArray[totalNumberOfInput - 1] - numArray[0]) / totalNumberOfInput;
//
//		printf("The missing element is %d \n", findMissingNum(numArray, 0, totalNumberOfInput-1, diff));
//	}
//	return 0;
//}
//
// 2 4 8 10 12 14 16 18