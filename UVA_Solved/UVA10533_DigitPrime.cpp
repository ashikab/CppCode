//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//#define MAX 10001
//using namespace std;
//
///*
//	Ei part ta RE khaitese... and max ke update kore 1000001 banate hobe 
//	(obosso eteo lav hoy nai... ) 
//*/
//
//int testPrime(int i)
//{
//	if((i != 2) && (i % 2 == 0))
//		return 0;
//	for(int j = 3; j * j <= i ; j += 2) //again, skipping all even numbers
//	{
//		if(i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int testCase, low, high, temp, counter, digitSum;
//	int arr[MAX] = {0};
//
//	for (int i = 2; i <= MAX; i++)
//	{
//		for (int j = i * i; j <= MAX; j+=i)
//		{
//			arr[j - 1] = 1;
//		}
//	}
//
//	scanf("%d", &testCase);
//	while(testCase != 0)
//	{
//		counter = 0;
//		scanf("%d%d",&low, &high);
//		for(int i = low - 1;i < high;i++)
//		{
//			if(arr[i] == 0) // it is a prime number
//			{
//				temp = i + 1;
//				digitSum = 0;
//
//				while(temp != 0)
//				{
//					digitSum += temp % 10;
//					temp = temp / 10;
//				}
//
//				if(testPrime(digitSum) == 1)
//				{
//					counter++;
//				}
//			}
//		}
//		printf("%d\n",counter);
//		testCase--;
//	}
//	return 0;
//}
//
///*	Ei part tai accepted hoise....	*/
//
///*
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//
//using namespace std;
//static bool primes[1000001];
//static int DigitPrime[1000001];
//
//void sieve (int n)
//{
//	for(int i=0;i<=1000000;i++)
//	{
//		primes[i]=1;
//	}
//	primes[0]=0;
//	primes[1]=0;
//	
//	int k=sqrt(n)+1;
//	for(int i=2;i<=k;i++)
//	{
//		if(primes[i])
//		{
//			for(int j=i+i;j<=n;j+=i)
//			{
//				primes[j]=0;
//			}
//		}
//	}
//}
//
//bool isPrime(int n)
//{
//	if(n <= 1000000)
//		return primes[n];
//	
//	int sq=sqrt(n);
//	
//	if(n %2 == 0)
//		return 0;
//	for(int i = 3;i <= sq;i += 2)
//	{
//		if(n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int getSum(int n)
//{
//	int sum=0;
//	while(n!=0)
//	{
//		int k = n % 10;
//		sum += k;
//		n = n / 10;
//	}
//	return sum;
//}
//
//int main(int argc, char** argv)
//{
//
//	int count=0;
//	sieve(1000000);
//	
//	for(int i=1;i<=1000000;i++)
//	{
//		if(isPrime(i))
//		{
//			if(isPrime(getSum(i)))
//			{
//				count++;
//			}
//		}
//		DigitPrime[i]=count;
//	}
//
//	int a, b, k;
//	scanf("%d",&k);
//	
//	while(k-->0)
//	{
//		scanf("%d %d",&a,&b);
//		printf("%d\n",DigitPrime[b]-DigitPrime[a-1]);
//	}
//
//	return 0;
//}
//*/