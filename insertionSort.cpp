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
////		*	http://cforbeginners.com/insertionsort.html			*
////		*														*
////		*********************************************************/
//
//int main()
//{
//	int numArray[MAX], totalNumberOfInput, tempIndex, temp;
//	printf("How many numbers are there: ");
//	scanf("%d",&totalNumberOfInput);
//	printf("\n");
//
//	for(int i = 0;i < totalNumberOfInput;i++)
//	{
//		scanf("%d",&numArray[i]);
//	}
//
//	for(int i = 1;i < totalNumberOfInput;i++)
//	{
//		tempIndex = i;
//
//		while((tempIndex > 0) && (numArray[tempIndex] < numArray[tempIndex - 1]))
//		{
//			temp = numArray[tempIndex];
//			numArray[tempIndex] = numArray[tempIndex - 1];
//			numArray[tempIndex - 1] = temp;
//			tempIndex--;
//		}
//
//	}
//
//	cout << "Sorted Numbers are: ";
//	for(int k = 0;k < totalNumberOfInput;k++) // Print sorted number...
//	{
//		cout << numArray[k] <<" ";
//	}
//	return 0;
//}
//
////sample : 2 5 1 3 4 8 41 90 21
////sample : 9 81 101 25 48 181 17 8 11 90 14 29 25 33 17