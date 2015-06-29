//#include<cstdio>
//#include <iostream>
//#include<string>
//#include <stdio.h>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int group;
//	char s[100];
//	string temp;	
//
//	while(scanf("%d",&group) == 1)
//	{
//		int i, len,tempLen, sgmentLen, offset = 1,stopZone = 0;
//		string result;
//		vector<string> string;
//
//		if(group == 0) break;
//
//		scanf(" ");
//		scanf("%s", s);
//
//		string.push_back(s);
//		len = string[0].length();
//		sgmentLen = len / group;
//		tempLen = sgmentLen;
//		temp = string[0];
//
//		for(i = 0; i < group;i++)
//		{
//			tempLen *= offset;
//			while(tempLen > stopZone)
//			{
//				result.push_back(temp[tempLen - 1]);
//				tempLen--;
//			}
//			stopZone = sgmentLen * offset;
//			tempLen = sgmentLen;
//			offset++;
//		}
//		cout << result << endl;
//	}
//	return 0;
//}