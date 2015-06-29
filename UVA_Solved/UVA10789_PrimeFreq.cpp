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
//	if(number == 1)
//		return 0;
//	else if(number == 2)
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
//	int testCases, casenum = 1;
//	cin >> testCases;
//
//	while(testCases != 0)
//	{
//		string str;
//		int val = 0, c = 0, countNum[10] = {0}, countCapital[26] = {0}, countSmall[26] = {0};
//		bool isEmpty = true;
//
//		cin >> str;
//
//		for ( c = 0 ; c < str.size() ; c++ )
//		{
//			if ( str[c] >= 'a' && str[c] <= 'z') 
//			{
//				countSmall[str[c]-'a']++;
//			}
//			else if(str[c] >= 'A' && str[c] <= 'Z')
//			{
//				countCapital[str[c]-'A']++;
//			}
//			else if(str[c] >= '0' && str[c] <= '9')
//			{
//				countNum[str[c]-'0']++;
//			}
//		}
//
//		printf("Case %d: ",casenum);
//		for( int k = 0 ; k < 10 ; k++ )
//		{
//			if ( countNum[k] != 0 )
//			{
//				val = isPrime(countNum[k]);
//				if(val == 1) // prime
//				{
//					printf("%c",k+'0');
//					isEmpty = false;
//					val = 0;
//					//printf("%c occurs %d times in the entered string.\n",k+'0',countNum[k]);
//				}
//			}
//		}
//		for ( int k = 0 ; k < 26 ; k++ )
//		{
//			if( countCapital[k] != 0 )
//			{
//				val = isPrime(countCapital[k]);
//				if(val == 1)	// prime
//				{
//					printf("%c",k+'A');
//					isEmpty = false;
//					val = 0;
//				}
//				//printf("%c occurs %d times in the entered string.\n",k+'A',countCapital[k]);
//			}
//		}
//		for(int k = 0 ; k < 26 ; k++)
//		{
//			if( countSmall[k] != 0 )
//			{
//				val = isPrime(countSmall[k]);
//				if(val == 1)	// prime
//				{
//					printf("%c",k+'a');
//					isEmpty = false;
//					val = 0;
//				}
//				//printf("%c occurs %d times in the entered string.\n",k+'a',countSmall[k]);
//			}
//		}
//		if(isEmpty != false) // No prime cout
//			printf("empty\n");
//		else
//			printf("\n");
//		testCases--;
//		casenum++;
//	}
//	return 0;
//}