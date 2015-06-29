//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<iostream>
//#include<sstream>
//#include<utility>
//using namespace std;
//
//int findNumOfZero(int numArray[], int low, int high)
//{
//	if (high <= low)
//		return -1;
//
//	int mid = low + (high - low) / 2;
//
//	if((mid == 0 || (numArray[mid - 1] == 1)) || numArray[mid] == 0) // solution
//	{
//		return mid;
//	}
//	
//	else if(numArray[mid] == 1) // Go to right side
//	{
//		return findNumOfZero(numArray, mid + 1, high);
//	}
//	
//	else
//	{
//		return findNumOfZero(numArray, 0, mid - 1);
//	}
//}
//
//int main()
//{
//	while(true)
//	{
//		int totalNumberOfInput, numArray[100];
//		printf("How many number are there : ");
//		scanf("%d", &totalNumberOfInput);
//		
//		for(int k = 0;k < totalNumberOfInput;k++) // Print sorted number...
//		{
//			scanf("%d",&numArray[k]);
//		}
//
//		printf("Position of First Zero can be found at %d \n", findNumOfZero(numArray, 0, totalNumberOfInput-1));
//	}
//	return 0;
//}
  
  
