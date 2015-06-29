//#include<iostream>
//#include <stdio.h>
//#include<cstring>
//#include<algorithm>
//#include<cmath>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//
///******************************************************************
//1. First i store sum of 2 number in a vector named "summation".
//2. Then subtract queryNumber from each element of "summation".
//3. If it is -ve make it +ve and find the minimum with index.
//4. Now get the element from "summation" with this index.
//******************************************************************/
//
//int main()
//{
//	int totalNumber, totalQuery, number, query, sum, diff, minDiff, caseNum = 1, minDiffIndex = -1;
//
//	while(scanf("%d",&totalNumber))
//	{
//		if(totalNumber == 0)
//			break;
//
//		vector<int> numContainer;
//		vector<int> queryContainer;
//		vector<int> summation;
//		
//		for(int k = 0;k < totalNumber;k++) // Take numbers...
//		{
//			scanf("%d",&number);
//			numContainer.push_back(number);
//		}
//
//		scanf("%d",&totalQuery);
//		for(int i = 0;i < totalQuery;i++) // Take query...
//		{
//			scanf("%d",&query);
//			queryContainer.push_back(query);
//		}
//
//		for(int k = 0;k < totalNumber - 1;k++) // Store sum of 2 number...
//		{
//			for(int j = k + 1;j < totalNumber;j++)
//			{
//				sum = numContainer[k] + numContainer[j];
//				summation.push_back(sum);
//			}
//		}
//
//		cout << "Case " << caseNum << ":" << endl;
//
//		for(int i = 0;i < queryContainer.size();i++)
//		{
//			minDiff = 999999999;
//
//			for(int j = 0;j < summation.size();j++)
//			{
//				diff = summation[j] - queryContainer[i];
//
//				if(diff < 0)
//				{
//					diff = diff * (-1);
//				}
//
//				if(diff < minDiff)
//				{
//					minDiff = diff;
//					minDiffIndex = j;
//				}
//			}
//
//			cout << "Closest sum to " << queryContainer[i] << " is "<< summation[minDiffIndex] << "." << endl;
//		}
//		caseNum++;
//	}
//	return 0;
//}
