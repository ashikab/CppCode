#include<cstdio>
#include <iostream>
#include<string>
#include <stdio.h>
#include<vector>
#include <map>
using namespace std;
int main()
{
	int testcase, totalSubject, casenum = 1;;
	scanf("%d", &testcase);
	
	while(testcase != 0)
	{
		int time;
		char sub[20];
		vector<string> subject;
		map<string, int> subjectTime;
		
		scanf("%d", &totalSubject);
		for(int i = 0;i < totalSubject;i++ )
		{
			int timeToComplete;
			bool flag = true;
			char s[20];	compiler, java, calculus
			
			scanf("%s %d", s, &timeToComplete);
			if(s[0] < 'a' || s[0] > 'z') //lowecase allowed only
				flag = false;
			if(flag == true)
			{
				subject.push_back(s);
				subjectTime[s] = timeToComplete;
			}
		}
		for(int i = 0;i < totalSubject;i++ )
		{
			cout<<subject[i]<<" needs "<<subjectTime[subject[i]]<<" days to complete;"<<endl;
		}
		scanf("%d", &time);
		scanf("%s", &sub);

		// if subjectTime[sub]= 0; that means this subject does not exists
		if(subjectTime[sub]!= 0 && subjectTime[sub] <= time)
		{
			cout<<"Case "<< casenum <<": Yesss"<<endl;
		}
		else if(subjectTime[sub]!= 0 && subjectTime[sub]> time && subjectTime[sub] <= (time + 5))
		{
			cout<<"Case "<< casenum <<": Late"<<endl;
		}
		else if(subjectTime[sub] == 0 || subjectTime[sub] > (time + 5))
			cout<<"Case "<< casenum <<": Do your own homework!"<<endl;
		testcase--;
		casenum++;
	}
	return 0;
}