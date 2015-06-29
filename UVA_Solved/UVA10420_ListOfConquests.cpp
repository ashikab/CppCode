//#include <stdio.h>
//#include <string.h>
//#include<string>
//#include<vector>
//#include <map>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//
//int main()
//{
//	int totalLine;
//	bool firstTime = true;
//	vector<string> country;
//	map<string, int> indexOf;
//
//	scanf("%d", &totalLine);
//	while(totalLine >= 0)
//	{
//		string line, countryName;
//		int pos;
//
//		getline (cin, line);
//		pos = line.find(' ');
//		countryName = line.substr(0, pos);
//
//		if(find(country.begin(), country.end(), countryName) != country.end()) // found it
//		{
//			indexOf[countryName]++;
//		}
//		else
//		{
//			country.push_back(countryName);
//			indexOf[countryName] = 1;
//		}
//
//		totalLine--;
//	}
//
//	sort(country.begin(), country.end());
//
//	for(int i = 1; i < country.size();i++) // Start from 1, because there is a "" at first(0th) position.
//	{
//		string c = country[i];
//		cout << c << " " << indexOf[c] << endl;
//	}
//
//	return 0;
//}
//
///*
//5
//Spain Donna Elvira
//England Jane Doe
//Spain Donna Anna
//Germany Ava Von Maur
//England Cristine Scarlet
//*/