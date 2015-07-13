//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <map>
//#include <vector>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int main() 
//{
//	int testCase, lenOfStrings, numberOfString;
//	string str;
//
//	scanf("%d", &testCase);
//
//	while(testCase--)
//	{
//		scanf("%d %d",&lenOfStrings, &numberOfString);
//
//		vector<string> strVec;
//		vector<int> intVec;
//		map<string, int> indexOf;
//
//		while(getchar() != '\n');	// Get each line in temp and store in input
//
//		while(numberOfString--)
//		{
//			getline(cin, str, '\n');
//
//			int count = 0;
//
//			for(int k = 0;k < lenOfStrings;k++)
//			{
//				char s1, s2;
//				for(int j = k + 1;j < lenOfStrings;j++)
//				{
//					s1 = str[k];
//					s2 = str[j];
//
//					if(s1 > s2)
//					{
//						count++;
//					}
//				}
//			}
//
//			strVec.push_back(str);
//			indexOf[str] = count;
//		}
//
//		for(int i = 0; i < strVec.size();i++) // store frequencies of the chars...
//		{
//			string st = strVec[i];
//			intVec.push_back(indexOf[st]);
//		}
//
//		sort(intVec.begin(), intVec.end()); // frequency is sorted now.
//
//		for(int i = 0; i < intVec.size();i++)
//		{
//			int k = 0, max = -1;
//
//			while(k < intVec.size())
//			{
//				string s = strVec[k];
//
//				if(intVec[i] == indexOf[s]) // 'i'th value is compared with each elem of the map.
//				{
//					cout << s << endl;
//					indexOf[s] = -1; // Once taken, should not be considered further.(Needde when multiple char has same freq.)
//				}
//				k++;
//			}
//		}
//		if (testCase) printf("\n");
//	}
//	return 0;
//}
//
///*
//1
//5 3
//ATTCC
//CCATT
//TATTC
//*/