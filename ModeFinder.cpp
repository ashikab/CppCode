//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<iostream>
//#include<sstream>
//#include<utility>
//
//#define MAX 100
//using namespace std;
//
////		/****************** Algorithm ***************************
////		*														*
////		*			http://cforbeginners.com/mode_c++.html		*
////		*														*
////		*********************************************************/
//
//int main()
//{
//	int numCountArray[MAX], numArray[MAX], totalNumberOfInput, max = 0;
//	printf("How many numbers are there: ");
//	scanf("%d",&totalNumberOfInput);
//	printf("\n");
//
//	for(int i = 0;i < totalNumberOfInput;i++)
//	{
//		scanf("%d",&numArray[i]);
//	}
//
//	for(int i = 0;i < totalNumberOfInput;i++)
//	{
//		int numCount = 1;
//		numCountArray[i] = numCount;
//		for(int k = i + 1;k < totalNumberOfInput;k++) // Find out the occurance of a number
//		{
//			if(numArray[i] == numArray[k])
//			{
//				numCount++;
//				numCountArray[i] = numCount;
//			}
//		}
//	}
//
//	for(int k = 0;k < totalNumberOfInput;k++) // Find out the maximum occurance
//	{
//		if(numCountArray[k] > max)
//		{
//			max = numCountArray[k];
//		}
//	}
//
//	cout << "Mode = " << max << endl;
//
//	for(int k = 0;k < totalNumberOfInput;k++) // Shpw the numbers with maximum occurance
//	{
//		if(numCountArray[k] == max)
//		{
//			cout << numArray[k] << " Occurs " << numCountArray[k] <<" Times" << endl;
//		}
//	}
//	return 0;
//}
//
//sample : 9 8 11 25 11 17 8 11 9 25
//sample : 9 8 11 25 8 11 17 8 11 9 14 9 25 33 17