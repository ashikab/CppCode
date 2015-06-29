//*******************SW_TEST_JULY_Prb2 start**********************************
                            
//#include <stdio.h>
//#include <iostream>
//#include <math.h>
//
//long long A, B, temp;
//
//int main(int argc, char** argv)
//{
//	int test_case;
//
//	setbuf(stdout, NULL);
//
//	for(test_case = 1; test_case <= 10; test_case++)
//	{
//		long long int arr[10], tmp[10];
//		long long Answer, last;
//		int k, i, j, m, modify = 0;
//		scanf("%lld %lld",&A,&B);
//
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//		/*
//			Please, implement your algorithm from this section.
//		*/
//
//		if(A > B)
//		{
//			temp = B;
//			B = A;
//			A = temp;
//		}
//
//		arr[0] = A;
//
//		for(i = 0;i < 9;i++)
//		{
//			long long int min = 9999999999;
//			if(i == 0)
//			{
//				if((arr[i] * A) > A && (arr[i] * A) < B)
//				{
//					arr[i + 1] = arr[i] * A;
//					last = arr[i + 1];
//				}
//				else if((arr[i] * A) > A && (arr[i] * A) >= B)
//				{
//					arr[i + 1] = B;
//					last = arr[i + 1];
//				}
//			}
//			else
//			{
//				for(j = i;j >= 0;j--)
//				{
//					if(((arr[j] * A) < min || (arr[j] * B) < min) && ((arr[j] * A) > last || (arr[j] * B) > last))
//					{
//						if((arr[j] * A) < min && (arr[j] * A) > last)
//							min = arr[j] * A;
//						else if((arr[j] * B) < min && (arr[j] * B) > last)
//							min = arr[j] * B;
//					}
//				}
//				arr[i + 1] = min;
//				last = arr[i + 1];
//			}
//		}
//
//		tmp[0] = arr[0];
//		for(k = 1;k < 9;k++)
//		{
//			tmp[k] = arr[k];
//
//			if(arr[k-1] < B && arr[k] > B)
//			{
//				m = k;
//				modify = 1;
//				tmp[m] = B;
//				while(m < 9)
//				{
//					tmp[m+1] = arr[k];
//					m++;k++;
//				}
//			}
//		}
//		if(modify == 0)
//			tmp[9] = arr[9];
//
//		/////////////////////////////////////////////////////////////////////////////////////////////
//         Answer = tmp[9];
//
//
//		// Print the answer to standard output(screen). 
//		printf("#%d %lld\n", test_case, Answer);
//	}
//
//	return 0; //Your program should return 0 on normal termination.
//}



/*	---Problem Description---	
Two positive integers are given. You create numbers by multiplying these numbers.  

For example, assume that 4 and 20 are given. When you list numbers you can create in order of
size by multiplying these numbers, the order will be 4, 4*4, 20, 4*4*4, 4*20...  

When 5 and 7 are given, the order will be 5, 7, 5*5, 5*7, ....  
When 2 and 100 are given, the order will be 2, 22, 23, 24, 25, 26, 100, 27, 2*100, 28, ..., so, the 10th smallest number is 28=256.  

Duplication in created numbers can happen. For instance, when 2 and 4 are given. the order of the list goes
2, 22, 4, 2*4, 23... but, 22 and 4 are the same and so are 2*4 and 23.In this case, consider them as one.
In other words, the order of multiplied numbers has to be listed as 2, 4, 8, 16, 32, ... after removing duplication,
so the 5th smallest number is 32, not 8.  

When two positive integers are given, write a program that finds the 10th smallest number among the created
numbers through multiplication of the two integers. 

All numbers as input are given in a way that does not cause overflow within integer range (231-1 or less).

  

[Constraints]

Two integers a and b fall into the following category: 1?a?7, 1?b?100. In other words, the first integer is 7
or less and the second integer is 100 or less.

  

[Input]

10 test cases are given. Throughout 10 lines, one test case is given in one line each. Each test case
consists of two integers a and b. The two numbers are distinguished by a white space. 

  

[Output]

Print answers to each of the 10 test cases in 10 lines in total. Start each line with "#x" (x: number of test case),
leave a white space, and write the answer.

*/                   
//*******************SW_TEST_JULY_Prb2 start**********************************