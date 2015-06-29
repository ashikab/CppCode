//#include<iostream>
//#include<sstream>
//#include<utility>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<cstdio>
//#include<cctype>
//using namespace std;
//
//int isPrime(int number)
//{
//	if(number == 1 || number == 2)
//		return 1;
//	else
//	{
//		for ( int i = 2; i*i <= number; i++)
//		{
//			if (number % i == 0)
//			{
//				return 0; //not a prime
//			}
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	string str;
//	while(cin >> str)
//	{
//		int countArr[52] = {0};
//		int num = 0;
//		for(int c = 0;c < str.size() ; c++)
//		{
//			if(str[c] >= 'a' && str[c] <= 'z')
//			{
//				num += str[c] - 'a' + 1;
//			}
//			else if(str[c] >= 'A' && str[c] <= 'Z')
//			{
//				num += str[c] - 'A' + 27;
//			}
//		}
//		
//		if(isPrime(num) == 1)
//		{
//			cout << "It is a prime word."<<endl;
//		}
//		else
//		{
//			cout << "It is not a prime word."<<endl;
//		}
//	}
//	return 0;
//}