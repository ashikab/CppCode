/*****************UVA10305 started*******************/
//#include<cstdio>
//#include <iostream>
//#include<string>
//#include <stdio.h>
//#include<vector>
//#include <map>
//#define ZERO 0
//#define NO 0
//#define YES 1
//#define MAX 101 //maximum node
//using namespace std;
//
//int main()
//{
//	int totalTask, totalRelation, caseNumber = 1;
//	while(scanf("%d %d",&totalTask, &totalRelation) == 2)
//	{
//		if(totalTask == 0 && totalRelation == 0)
//			break;
//		int M, index = 1;
//		int arrIncount[MAX]={ZERO}, checked[MAX]={NO}, result[MAX];
//		vector<int>edge[MAX];
//
//		for(int i = 1;i <= totalRelation;i++)
//		{
//			int x, y;
//			scanf("%d %d",&x, &y);
//			edge[x].push_back(y);
//		}
//
//		for(int j = 1;j <= totalTask;j++)
//		{
//			int inCount = 0;
//			for(int k = 1;k <= totalTask;k++) //print in degree
//			{
//				for(int m = 0;m < edge[k].size();m++)
//				{
//					if(edge[k][m] == j)
//						inCount++;
//				}
//			}
//			arrIncount[j] = inCount;
//		}
//
//		while(index <= totalTask) //Do sorting...
//		{
//			for(int c = 1;c <= totalTask;c++)
//			{
//				if(arrIncount[c] == 0 && checked[c] == NO)
//				{
//					result[index] = c; //Take this node...
//					index++;
//					checked[c] = YES; //Avoid repetation of node...
//					for(int i=0; i < edge[c].size() ; i++)
//					{
//						arrIncount[edge[c][i]]--; // Reduce InDegree by one from the connected node.. 
//					}
//				}
//			}
//		}
//
//		for(int k = 1;k <= totalTask;k++)
//		{
//			printf("%d ", result[k]);
//		}
//		cout<<endl;
//	}
//	return 0;
//}
  