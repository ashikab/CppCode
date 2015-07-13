//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <math.h>
//#define MAX 98765
//#define MIN 1234
//#define VACANT -1
//using namespace std;
//
//bool select(int num1, int num2)
//{
//	int arr[10];
//	int temp, numberOne = num1, numberTwo = num2;
//
//	for(int i = 0;i < 10;i++)
//	{
//		arr[i] = VACANT;
//	}
//
//	if(numberOne < 10000)
//	{
//		arr[0] = 0;
//	}
//
//	while(numberOne != 0)
//	{
//		temp = numberOne % 10;
//		numberOne = numberOne / 10;
//		
//		if(arr[temp] != VACANT) // If this place is already occupied, return false.
//			return false;
//		else
//		{
//			arr[temp] = temp;
//		}
//	}
//
//	if(numberTwo < 10000)
//	{
//		return false;
//	}
//
//	while(numberTwo != 0)
//	{
//		temp = numberTwo % 10;
//		numberTwo = numberTwo / 10;
//
//		if(arr[temp] != VACANT) // If this place is already occupied, return false.
//			return false;
//		else
//		{
//			arr[temp] = temp;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int caseNum, N, numOne, numTwo;
//	bool resultFound, first = true;
//	
//	while(scanf("%d", &N))
//	{
//		if(N == 0)
//			break;
//		if(first == true)
//			printf("\n");
//
//		first = false;
//		resultFound = false;
//		numOne = MAX / N;
//
//		for (int i = MIN; i <= numOne; i++)
//		{
//			int n = i * N;
//			
//			if (select(i, n))
//			{
//				resultFound = true;
//				printf("%05d / %05d = %d\n", n, i, N);
//			}
//		}
//		if(resultFound == false)
//			printf("There are no solutions for %d.\n", N);
//	}
//	return 0;
//}