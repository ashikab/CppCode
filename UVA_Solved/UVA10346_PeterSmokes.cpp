//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k, result;
//	while(cin >>n >>k)
//	{
//		result = n;
//		while( n/ k != 0)
//		{
//			result += (n / k);
//			n = (n / k) + (n % k);
//		}
//		cout << result << endl;
//	}
//	return 0;
//}

//Let peter has 7 cig...
//result = 7 + 3 + 1...but have 1 reminder at each step
//Total 3 reminder. So 1 more cig from it and again remain 1
//result = 7 + 3 + 1 + 1.The last cig is now added with the last
//reminder and make it 2.So we can make another cig from it.
//Now result is = 7 + 3 + 1 + 1 + 1.Again last one makes 1 reminder
//but we cant make anymore cig from 1 reminder.