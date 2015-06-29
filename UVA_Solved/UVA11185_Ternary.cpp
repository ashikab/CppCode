//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	long long int number;
//	while(scanf("%llu", &number) == 1)
//	{
//		if(number <= -1)
//			break;
//		if(number == 0)
//			cout<<number;
//		else
//		{
//			long long int quotent,reminder;
//			int tempArr[500];
//			int i = 0;
//			while(number != 0)
//			{
//				reminder = number % 3;
//				number = number / 3;
//				tempArr[i] = reminder;
//				i++;
//			}
//
//			for(int k = i-1;k >= 0 ;k--)
//			{
//				cout << tempArr[k];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}