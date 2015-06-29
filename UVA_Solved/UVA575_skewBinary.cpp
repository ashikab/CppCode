
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
//	unsigned long number, len;
//	char num[500];
//	while(gets(num))
//	{
//
//		long long int result = 0, power = 1;
//		len = strlen(num);
//		int digit = num[len-1] - 48;
//
//		if(len == 1 && digit == 0) break;
//
//		else
//		{
//			while(len > 0)
//			{
//				long long int temp = 1;
//				for(int i = 1; i <= power;i++)  // pow kaj na korai ei process....
//				{
//					temp = temp * 2;
//				}
//				temp--;
//				result = result + digit * temp;
//				power++;
//				len--;
//				digit = num[len-1] - 48;
//			}
//			cout << result << endl;
//		}
//	}
//	return 0;
//}
