//#include<stdio.h>
//
//int main()
//{
//	long int start, firstNum, senondNum, thirdNum, sum;
//	while(scanf("%ld %ld %ld %ld",&start,&firstNum,&senondNum,&thirdNum))
//	{
//		if(start == 0 && firstNum == 0 && senondNum == 0 && thirdNum == 0)
//			break;
//
//		sum = 0;
//
//		thirdNum = senondNum - thirdNum;
//		senondNum = senondNum - firstNum;
//		firstNum = start - firstNum;
//
//		if(firstNum < 0)
//			firstNum =  firstNum + 40;
//		if(senondNum < 0)
//			senondNum = senondNum + 40;
//		if(thirdNum < 0)
//			thirdNum = thirdNum + 40;
//
//		sum = 1080 + (firstNum * 9) + (senondNum * 9) + (thirdNum * 9);
//		printf("%d\n", sum);
//		/*printf("sum: %d\n",sum);*/
//	}
//	return 0;
//}