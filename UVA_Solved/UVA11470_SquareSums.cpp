//#include<iostream>
//#include <stdio.h>
//#include<string>
//#include<cstring>
//#include<string.h>
//#define MAX 11
//using namespace std;
//
//int summation(int, int, int);
//int caseNumber = 0, mat[MAX][MAX];
//
//int main()
//{
//	int dimension, startPosition = 0, counter = 0;
//	
//	while(scanf("%d",&dimension) && dimension)
//	{
//		caseNumber++;
//		for(int i = 0; i < dimension; i++)
//		{
//			for(int j = 0; j < dimension; j++)
//			{
//				scanf("%d",&mat[i][j]);
//			}
//		}
//
//		if(dimension == 1)
//		{
//			cout << "Case "<< caseNumber << ": " << mat[0][0] << endl;
//		}
//		else
//		{
//			cout << "Case "<< caseNumber << ":";
//			int val = summation(dimension, startPosition, counter);
//			cout << endl;
//		}
//	}
//
//	return 0;
//}
//
//int summation(int dimention, int startPosition, int counter)
//{
//	if(dimention <= 0) // termination...
//	{
//		return 0;
//	}
//	else
//	{
//		int sum = 0, endPosition = dimention - 1 + counter;
//
//		for(int row = startPosition;row <= endPosition;row++)
//		{
//			if(row == startPosition || row == endPosition) // for 1st and last add each element.
//			{
//				for (int col = startPosition; col <= endPosition; col++)
//				{
//					sum += mat[row][col];
//				}
//			}
//			else
//			{
//				for (int col = startPosition; col <= endPosition; col++)
//				{
//					if(col == startPosition || col == endPosition) // // add only bordered elements.
//					{
//						sum += mat[row][col];
//					}
//				}
//			}
//		}
//
//		cout << " " << sum ;
//		
//		dimention -= 2; // from n*n now it is (n-2)*(n-2) matrix.
//		startPosition++;
//		counter++;
//
//		summation(dimention, startPosition, counter);
//	}
//
//}
//
///*
//6
//5 3 2 7 9 2
//1 7 4 2 4 7
//5 3 2 4 6 1
//1 3 4 5 1 8
//1 4 5 6 3 9
//4 8 2 0 4 2
//*/