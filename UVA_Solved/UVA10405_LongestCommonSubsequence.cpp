//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#define MAX 101
//using namespace std;
//
///*
//-----> Caution : Make MAX = 1010 before submission. If i make MAX = 1010 my pc cant allocate memory
//		for this big size array.<-----
//*/
//
//int max(int a, int b)
//{
//	return (a > b)? a : b;
//}
//
//int lcs( string X, string Y, int m, int n )
//{
//	int L[MAX][MAX];
//	int i, j;
//	
//	for (i=0; i<=m; i++)
//	{
//		for (j=0; j<=n; j++)
//		{
//			if (i == 0 || j == 0)
//				L[i][j] = 0;
//
//			else if (X[i-1] == Y[j-1])
//				L[i][j] = L[i-1][j-1] + 1;
//
//			else
//				L[i][j] = max(L[i-1][j], L[i][j-1]);
//		}
//	}
//
//	return L[m][n];
//}
//
//int main()
//{
//	int m, n;
//	string s1,s2;
//	
//	while(getline(cin,s1))
//	{
//		getline(cin,s2);
//		
//		m = s1.size();
//		n = s2.size();
//
//		cout << lcs( s1, s2, m, n )<<endl;
//	}
//	return 0;
//}