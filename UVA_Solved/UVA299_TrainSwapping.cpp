//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//
///******************************************************************
//1. Rightmost number is compared with each number its left.
//2. If it is less then the number at right increase swap number.
//3. This comparison is not required for leftmost element.
//******************************************************************/
//
//
//int main() 
//{
//	int testCase, length, temp, totalSwap;
//	int arr[55];
//
//	scanf("%d", &testCase);
//	while(testCase != 0)
//	{
//		totalSwap = 0;
//		scanf("%d", &length);
//		
//		for(int i = 0;i < length;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//
//		for(int i = length - 1;i > 0; i--) // Start from right and comparison not needed for leftmost element.
//		{
//			temp = i - 1;
//			while(temp >= 0)
//			{
//				if(arr[i] < arr[temp]) // in numAtRight < numAtLeft increment swap number
//				{
//					totalSwap++;
//				}
//				temp--;
//			}
//		}
//		cout << "Optimal train swapping takes " << totalSwap << " swaps."<< endl;
//		testCase--;
//	}
//    return 0;
//}