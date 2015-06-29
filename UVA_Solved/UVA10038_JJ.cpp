//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int totalNUm;
//	while(cin >> totalNUm)
//	{
//		int num, arr[3000]={0}, res[3000]={0};
//		int arraySize = 0;
//		int ans = 0;
//
//		for(int i = 0;i < totalNUm;i++)
//		{
//			cin >> num;
//			arr[i] = num;
//			arraySize++;
//		}
//		for(int i = 0;i < (arraySize-1);i++)
//		{
//			int dif = arr[i] - arr[i+1];
//			if(dif > 0)
//				res[i] = dif;
//			else if(dif <= 0)
//				res[i] = dif * (-1);
//		}
//		sort(res, res+arraySize);
//
//		int first = 1, last = arraySize-1;
//		for(int i = 1;i < arraySize;i++)
//		{
//			if((res[first] != 1) || (res[last] != (totalNUm - 1)) || (res[i]==res[i + 1]))
//			{
//				cout << "Not jolly" <<endl;
//				ans = 1;
//				break;
//			}
//			//cout << res[i] << endl; //i must starts from 1...Sort put garbage value at 0th index
//		}
//		if(ans == 0)
//			cout << "Jolly" << endl;
//	}
//	return 0;
//}
//// 23 34 11 90 66 52 86 6 49 61