//#include <stdio.h>
//#include <string.h>
//#include<vector>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int height, width, result;
//
//	while(scanf("%d %d",&height, &width))
//	{
//		if(!height && !width)
//			break;
//		
//		int k, tempWidth = width, result = 0;
//		vector<int> v;
//
//		while(tempWidth != 0)
//		{
//			scanf("%d", &k);
//			v.push_back(k);
//			tempWidth--;
//		}
//
//		for(int i = 0;i < width;i++)
//		{
//			if(i == 0) // add the difference betwn 1st slot and height
//			{
//				result += height - v[i];
//			}
//			else
//			{
//				int k = v[i] - v[i - 1]; // if current slot is less than precvious slot, add the difference
//				if(k < 0)
//				{
//					result -= k;
//				}
//			}
//		}
//
//		printf("%d\n", result);
//	}
//
//	return 0;
//}