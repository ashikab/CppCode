//#include <iostream>
//using namespace std;
//
//int main() {
//	long long n,ans,i;
//	int counter,check;
//	cin>>n;
//	while (n!=0)
//	{
//		if (n < 0)
//			n = -n;
//		ans = -1;
//		counter = 0;
//		check = 0;
//		//print -1 for numbers that has 1 prime divisors as primes, pow of primes (4,8,9)
//		for ( i = 2; i*i <= n && n!=1; i++)
//		{
//			while (n%i == 0)
//			{
//				n /= i;
//				ans = i;
//				check = 1;
//			}
//			if (ans == i)counter++;
//		}
//
//
//		if (n != 1 && check == 1) //Normal number
//			ans = n;
//		else if(ans == -1) // prime number
//			ans = -1;
//		else if (counter == 1) //power of 2
//			ans = -1;
//
//		cout<<ans<<endl;
//		cin>>n;
//	}
//}