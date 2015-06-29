//#include<cstdio>
//#include<conio.h>
//
//int dp[20];
//
//int Fibo(int n)
//{
//	if(n == 0)
//		return 0;
//	if(n == 1 || n == 2)
//		return 1;
//	if(dp[n] != -1)
//		return dp[n];
//	else
//	{
//		dp[n] = Fibo(n-1) + Fibo(n-2);
//		return dp[n];
//	}
//}
//void main()
//{
//	int num;
//	for(int i = 0;i < 20;i++)
//		dp[i] = -1;
//	printf("Enter ur number: ");
//	scanf("%d", &num);
//	int result = Fibo(num);
//	printf("This is = %d",result);
//	getch();
//}