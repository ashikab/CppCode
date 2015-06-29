//
//#include <iostream>
//#include<string>
//#include <stdio.h>
//#include<vector>
//#include <map>
//#define ZERO 0
//#define NO 0
//#define YES 1
//#define MAX 100 //maximum node
//using namespace std;
//
//int main()
//{
//	int beverages, caseNumber = 1;
//	while(scanf("%d",&beverages) == 1)
//	{
//		int M, index = 0;
//		int alcStrength[MAX]={ZERO}, checked[MAX]={NO}, result[MAX];
//		string temp;
//		vector<string> beverage;
//		vector<int>edge[MAX];
//		map<string, int> indexOf;
//		map<int, string> indexOut;
//
//		scanf("%d", &beverages);
//		for(int i = 0;i < beverages;i++)
//		{
//			char s[99];	//vodka,beer,wine
//			scanf("%s", s);	
//			beverage.push_back(s);
//			indexOut[i] = s;
//			indexOf[s] = i;	//vodka=0,beer=1,wine=2
//		}
//
//		////test loop
//		//for(int i = 0;i < beverage.size();i++)
//		//{
//		//	temp =  beverage[i];
//		//	cout << temp << "has an index of " <<indexOf[temp] << endl;
//		//}
//
//		scanf("%d", &M);
//		for(int i = 0;i < M;i++)
//		{
//			char a[99], b[99];
//			scanf("%s%s", a, b);
//			edge[indexOf[a]].push_back(indexOf[b]); //converts into an adj list
//		}
//
//		for(int j = 0;j < beverages;j++)
//		{
//			int inCount = 0;
//			for(int k = 0;k < beverages;k++) //print in degree
//			{
//				for(int m = 0;m < edge[k].size();m++)
//				{
//					if(edge[k][m] == j)
//						inCount++;
//				}
//			}
//			alcStrength[j] = inCount;
//		}
//
//
//		while(index < beverages) //Do sorting...
//		{
//			for(int c = 0;c < beverages;c++)
//			{
//				bool flag = false;
//				if(alcStrength[c] == 0 && checked[c] == NO)
//				{
//					flag = true;
//					result[index] = c; //Take this node...
//					index++;
//					checked[c] = YES; //Avoid repetation of node...
//					for(int i=0; i < edge[c].size() ; i++)
//					{
//						alcStrength[edge[c][i]]--; // Reduce InDegree by one from the connected node.. 
//					}
//				}
//				if(flag == true) break; // In case of same In Degree take the drinks appear first.
//			}
//		}
//
//		cout << "Case #" <<caseNumber <<": Dilbert should drink beverages in this order: ";
//		for(int k = 0;k < beverages;k++)
//		{
//			if(k != (beverages-1))
//				cout<<indexOut[result[k]]<<" ";
//			else
//				cout<<indexOut[result[k]] <<"."<<endl<<endl;
//		}
//		caseNumber++;
//	}
//	return 0;
//}

/*
5
wine, beer, rum, apple-juice, cachaca
6
beer cachaca, apple-juice beer, apple-juice rum, beer rum, beer wine, wine cachaca
They will be stored with an index(wine = 0, beer = 1...).We will get our first answer at c=3(A-juice), Then at
c=1(Beer). Now Both wine(c=0) and rum(c=2) has an incount of 0.If we let the loop to go c will incremented to 2
and we will get rum as an answer, but we want if they contain same alchohol the drink appear first will be showed
so we breakthe loop and start again if an answer found.So c starts from 0 again and show wine as an answer.
*/