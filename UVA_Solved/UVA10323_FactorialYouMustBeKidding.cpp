//#include <stdio.h>
//
//int main()
//{
//	long long int n;
//	while(scanf("%lld", &n) == 1)
//	{
//		long long int result = 1;
//
//		if(n > 7 && n < 14) //fact(13) = 6227020800
//		{
//			for(int i = 1; i <= n; i++)
//			{
//				result *= i;
//			}
//			printf("%lld\n", result);
//		}
//
//		else if(n > 13) printf("Overflow!\n");
//
//		else if(n <= 7 && n > 0) printf("Underflow!\n");
//
//		else if((n <= 0 && ((-1 * n % 2) == 0)))  printf("Underflow!\n");
//
//		else if (n < 0 && ((-1 * n) % 2 == 1)) printf("Overflow!\n");
//	}
//}