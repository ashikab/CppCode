//#include<stdio.h>
//#include<string.h>
//#define SIZE 70000
//
//int integer[SIZE],resultArray[SIZE];
//int cumulative_sum, maximum_sum;
//
//int main(){
//	int numberOfSequence;
//	while(1) 
//	{
//		cumulative_sum = 0;
//		maximum_sum = 0;
//
//		scanf("%d", &numberOfSequence);
//		if (numberOfSequence == 0) break;
//
//		for(int i = 0; i < numberOfSequence; i++)
//		{
//			scanf("%d",&integer[i]);
//		}
//
//		/****************** Algorithm ***************************
//		*														*
//		*			dp[0] = a[0]								*
//		*			dp[i] = max(dp[i-1] + a[i], a[i])			*
//		*														*
//		*********************************************************/
//
//		resultArray[0] = integer[0];
//		if(resultArray[0] > maximum_sum) //make sure maximum sum is always +ve, if it remains 0 it is a loosing streak
//			maximum_sum = resultArray[0];
//
//		for(int i = 1; i < numberOfSequence; i++)
//		{
//			cumulative_sum = resultArray[i - 1] + integer[i];
//			if(cumulative_sum > integer[i])
//			{
//				resultArray[i] = cumulative_sum;
//			}
//			else
//				resultArray[i] = integer[i];
//
//			if(resultArray[i] > maximum_sum)
//				maximum_sum = resultArray[i];
//		}
//
//		if(maximum_sum == 0) printf("Losing streak.\n");
//		else printf("The maximum winning streak is %d.\n",maximum_sum);
//	}//while
//	return 0;
//}