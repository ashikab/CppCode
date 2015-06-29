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
////		*			http://cforbeginners.com/ssort.html			*
////		*														*
////		*********************************************************/
//
//int main()
//{
//	int numArray[MAX], totalNumberOfInput, min, temp, indexForMinValue;
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
//		min = numArray[i];
//		bool isMinValueChanged = false;
//
//		for(int k = i + 1;k < totalNumberOfInput;k++) // Find out minimum number
//		{
//			if(numArray[k] < min)
//			{
//				min = numArray[k];
//				isMinValueChanged = true;
//				indexForMinValue = k;
//			}
//		}
//
//		if(isMinValueChanged == true) //swap value
//		{
//			temp = numArray[i];
//			numArray[i] = numArray[indexForMinValue];
//			numArray[indexForMinValue] = temp;
//		}
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




/* Done for Bhaia.....*/
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<iostream>
//#include<sstream>
//#include<utility>
//
//using namespace std;
//
//
//int main()
//{
//	int firstArray[10], secondArray[20], totalNumberOfInput, minValue, temp, indexForMinValue;
//
//	for(int i = 0;i < 10;i++)
//	{
//		scanf("%d %d",&firstArray[i], &secondArray[i]);
//	}
//
//	for(int i = 10;i < 20;i++)
//	{
//		secondArray[i] = firstArray[i - 10];
//	}
//
//	for(int i = 0;i < 20;i++)
//	{
//		minValue = secondArray[i];
//		bool isMinValueChanged = false;
//
//		for(int k = i + 1;k < 20;k++) // Find out minimum number
//		{
//			if(secondArray[k] < minValue)
//			{
//				minValue = secondArray[k];
//				isMinValueChanged = true;
//				indexForMinValue = k;
//			}
//		}
//
//		if(isMinValueChanged == true) //swap value
//		{
//			temp = secondArray[i];
//			secondArray[i] = secondArray[indexForMinValue];
//			secondArray[indexForMinValue] = temp;
//		}
//	}
//
//	cout << "Sorted Numbers are: ";
//	for(int k = 0;k < 20;k++) // Print sorted number...
//	{
//		cout << secondArray[k] <<" ";
//	}
//	return 0;
//}

//sample : 9 81 101 25 26 16 25 33 17 44 48 181 87 17 8 11 90 101 14 29