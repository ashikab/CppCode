//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <string>
//using namespace std;
/******************************************************************
	Trying to solve with vector. But unfortunately it stuck in the
	commented line after some iteration.
******************************************************************/
//
//int max(int a, int b)
//{
//    return (a > b)? a : b;
//}
//
//int lcs( char *X, char *Y, int m, int n )
//{
//   vector<int> L[101];
//   int i, j, temp;
//  
//   for(i = 0; i <= n; i++)
//   {
//	   L[0].push_back(0);
//   }
//   for(i = 1; i <= m; i++)
//   {
//	   L[i].push_back(0);
//   }
//
//
//   for (i = 1; i <= n; i++)
//   {
//	   for (j = 1; j <= m; j++)
//	   {
//		   if (Y[i-1] == X[j-1])
//		   {
//			   temp = L[i-1][j-1];
//			   L[j].push_back( temp + 1);
//		   }
//		   else
//		   {
//			   int fir = L[i-1][j];
//			   int sec = L[i][j-1]; //Here it stuck after some iteration
//			   temp = max(fir, sec);
//			   L[j].push_back(temp); 
//		   }
//	   }
//   }
//   
//   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
//   return L[m][n];
//}
//
//int main()
//{
//  char X[] = "ASHIK";
//  char Y[] = "AHK";
//  
//  int m = strlen(X);
//  int n = strlen(Y);
//  
//  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );
//  
//  getchar();
//  return 0;
//}