#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#define MAX 39000
using namespace std;


/******************************************************************
				I have submitted this one. And got AC
******************************************************************/

//int main() 
//{
//	int totalDataSet, number, index, result, temp, digitArr[MAX] = {0}, resultArr[11];
//	scanf("%d",&totalDataSet);
//	
//	while(totalDataSet != 0)
//	{
//		index = 0;
//		scanf("%d",&number);
//
//		for(int i = 1; i <= number;i++)
//		{
//			temp = i;
//			while(temp != 0)
//			{
//				digitArr[index] = temp % 10;
//				temp = temp / 10;
//				index++;
//			}
//		}
//		for(int i = 0;i <= 9;i++)
//		{
//			result = 0;
//
//			for(int k = 0;k < index;k++)
//			{
//				if(i == digitArr[k])
//				{
//					result++;
//				}
//			}
//
//			resultArr[i] = result;
//			
//			if(i != 9)
//				printf("%d ", resultArr[i]);
//		}
//		
//		printf ("%d\n", resultArr[9]);
//		totalDataSet--;
//	}
//    return 0;
//}



int main() 
{
	int totalDataSet, number, temp, count[10];
	scanf("%d",&totalDataSet);
	
	while(totalDataSet != 0)
	{
		for(int i = 0;i < 10;i++)
		{
			count[i] = 0;
		}

		scanf("%d",&number);

		for(int i = 1; i <= number;i++)
		{
			temp = i;
			while(temp != 0)
			{
				count[temp % 10]++;
				temp = temp / 10;
			}
		}
		for(int i = 0;i < 9;i++)
		{

			printf("%d ", count[i]);
		}

		printf ("%d\n", count[9]);
		totalDataSet--;
	}
    return 0;
}