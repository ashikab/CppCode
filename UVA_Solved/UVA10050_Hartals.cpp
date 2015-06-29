//#include<iostream>
//#include<list>
//#include<string>
//#include<cstring>
//#include<sstream>
//#include<cctype>
//#include<string.h>
//#include<algorithm>
//#include<cmath>
//#include<stack>
//#include<fstream>
//#include<cstdlib>
//#include<vector>
//#include<map>
//#include<utility>
//#include<iomanip>
//#include<queue>
//
//#define MAXDAY 3651
//using namespace std;
//
//int main()
//{	
//	int testCase;
//	scanf("%d", &testCase);
//	while(testCase > 0)
//	{	
//		int totalDay, totalParty, dayInterval, friDay = 6, SatDay = 7, HartalCount = 0;
//		vector<int>Coloumn[MAXDAY];
//
//		scanf("%d", &totalDay);
//		scanf("%d", &totalParty);
//		
//		for(int i = 1;i <= totalParty;i++) // take party hartal information
//		{
//			scanf("%d",&dayInterval);
//			for(int k = dayInterval;k <= totalDay;k = k + dayInterval)
//			{
//				Coloumn[k].push_back(i);
//			}
//		}
//
//		for(int currentDay = 1;currentDay <= totalDay;currentDay++)
//		{
//
//			if(currentDay < friDay)
//			{
//				if(Coloumn[currentDay].size() > 0)
//					HartalCount++;
//			}
//			else if(currentDay == friDay)
//			{
//
//			}
//			else if(currentDay == SatDay)
//			{
//				friDay += 7;
//				SatDay += 7;
//			}
//
//		}
//		printf("%d\n",HartalCount);
//		testCase--;
//	}
//	return 0;
//}
