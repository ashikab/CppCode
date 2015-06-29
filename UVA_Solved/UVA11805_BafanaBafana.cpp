//#include<iostream>
//#include<sstream>
//#include<utility>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<cstdio>
//#include<cctype>
//using namespace std;
//int main()
//{
//	int testcase, caseNum;
//	scanf("%d",&testcase);
//	caseNum = 1;
//	while(testcase != 0)
//	{
//		int playerArr[24];
//		playerArr[0] = -1;
//		int index, totalPlayer, ballGivenTo, totallPass;
//		
//		scanf("%d %d %d", &totalPlayer, &ballGivenTo, &totallPass);
//		index = ballGivenTo;
//
//		for(int i = 1;i <= totalPlayer;i++)
//		{
//			playerArr[i]= i;
//		}
//		for(int k = 1;k <= totallPass;k++)
//		{
//			index = index + 1;
//			if(index <= totalPlayer)
//				ballGivenTo = playerArr[index];
//			else
//			{
//				index = 1;
//				ballGivenTo = playerArr[index];
//			}
//		}
//		cout << "Case " << caseNum << ": " << ballGivenTo << endl;
//		caseNum++;
//		testcase--;
//	}
//	return 0;
//}