
//#include <iostream>
//#include<string>
//#include <stdio.h>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	//string line;
//	//string input = line;
//	//string delimiter = ":";
//	//string hour = input.substr(0, input.find(delimiter)); // token is "scott"
//	//string min = input.substr(input.find(delimiter)+1, input.find("\n")); // token is "scott"
//
//	//int H = atoi(hour.c_str());
//	//int M = atoi(min.c_str());
//	//double hr = (double)H;
//	//double mn = (double)M;
//	double mn,hr;
//	while(scanf("%lf:%lf",&hr,&mn)==2)
//	{
//		if((hr==0)&&(mn==0))
//              break;
//		double difference;
//		hr = (60.000 * hr + mn) / 2.000;
//		mn = 6.000 * mn;
//		difference = hr - mn;
//
//		if(difference < 0.00)
//			difference = difference * (-1.000);
//		if(difference > 180.000)
//			difference = 360.000 - difference;
//		printf("%0.3lf",difference);
//		cout<<endl;
//		//cout << "Angle Between Hour hand and Minute hand is " << difference <<" degree" <<endl;
//	}
//	return 0;
//}