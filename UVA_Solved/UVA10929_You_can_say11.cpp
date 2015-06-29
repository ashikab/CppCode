//#include<iostream>
//#include<cstdio>
//#include<math.h>
//#include <iostream>
//#include<string>
//#include <stdio.h>
//#include<vector>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int save, len;
//	char num[1005];
//	while(gets(num))
//	{
//		bool doAddition = true;
//		long long int result = 0;
//		len = strlen(num);
//		save = len;
//		int digit = num[len-1] - 48;
//
//		if(len == 1 && digit == 0) break;
//
//		else
//		{
//			while(len > 0)
//			{
//				if(doAddition == true)
//				{
//					result = result + digit;
//					doAddition = false;
//				}
//				else
//				{
//					result = result - digit;
//					doAddition = true;
//				}
//				len--;
//				digit = num[len-1] - 48;
//			}
//			if(result % 11 == 0)
//			{
//				cout << num << " is a multiple of 11." << endl;
//			}
//			else
//			{
//				cout << num << " is not a multiple of 11." << endl;
//			}
//		}
//	}
//	return 0;
//}