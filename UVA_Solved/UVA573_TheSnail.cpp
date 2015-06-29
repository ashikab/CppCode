//#include<iostream>
//#include<cstdio>
//#include<math.h>
//#include <iostream>
//#include <string>  
//#include <stdio.h>
//
//using namespace std;
//
//int main()
//{
//	double height, climb, slideDown, fatigue;
//	while(cin >> height >> climb >> slideDown >> fatigue)
//	{
//		if(height == 0)
//			break;
//
//		int day = 1;  
//		double updatedClimb = climb, updatedHeight = 0;  
//		double fatigueFactor = climb * fatigue / 100;
//		string result = "success on day ";
//
//		while(true)
//		{
//			updatedHeight += updatedClimb;
//			if(updatedHeight > height)
//			{
//				break;
//			}
//
//			updatedHeight -= slideDown;
//			updatedClimb -= fatigueFactor;
//			
//			if(updatedClimb < 0)
//				updatedClimb = 0;
//
//			if(updatedHeight < 0)
//			{
//				result = "failure on day ";
//				break;
//			}
//			day++;
//		}
//
//		cout << result << day << endl; 
//	}
//	return 0;
//}
