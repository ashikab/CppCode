//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	char str[100000];
//	long wordCount, length, i;
//	bool started;
//
//	while(gets(str))
//	{
//		length = strlen(str);
//		wordCount = 0;
//		started = false;
//
//		for(i=0;i<length;i++)
//		{
//			if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
//			{
//				if(!started)
//				{
//					wordCount++;
//					started = true;
//				}
//			}
//			else
//			{
//				if(started) started = false;
//			}
//		}
//
//		printf("%ld\n",wordCount);
//	}
//
//	return 0;
//}