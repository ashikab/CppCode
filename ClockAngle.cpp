// Source: http://en.wikipedia.org/wiki/Clock_angle_problem

//#include <cstdio>
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int hour, min;
//	int next = 1;
//	while(next != 0)
//	{
//		scanf("%d %d",&hour, &min);
//		if(hour == 0 && min == 0)
//			break;
//		int difference;
//		hour = (60 * hour + min) / 2;
//		min = 6 * min;
//		difference = hour- min;
//		
//		if(difference < 0)
//			difference = difference * (-1);
//		//difference = difference / 2;
//		cout << "Angle Between Hour hand and Minute hand is " << difference <<" degree" <<endl;
//		cout << "Next Input ? " << endl;
//		cin >> next;
//	}
//	return 0;
//}