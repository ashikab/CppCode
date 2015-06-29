//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main() {
//	double ans, tempAns, avg;
//	int testcases, temp, studentNumber, number;
//	int numArray[1000];
//	cin >> testcases;
//
//	while (testcases != 0)
//	{
//		testcases--;
//		int count = 0;
//		int totalNumber = 0, i = 0;
//		cin >> studentNumber;
//		temp = studentNumber;
//		if(studentNumber != 0)
//		{
//			while (temp != 0)
//			{
//				cin >> number;
//				numArray[i] = number;
//				totalNumber = totalNumber + number;
//				temp--;
//				i++;
//			}
//			avg = (double)totalNumber / (double)studentNumber;
//
//			for(int k = 0; k < i; k++)
//			{
//				if(numArray[k] > avg)
//					count++;
//			}
//
//			tempAns = (double)count / (double)studentNumber;
//			ans = tempAns * 100;
//			printf("%.3lf%%\n",ans);
//			//cout << ans<<"%";
//		}
//		else
//		{
//			//cin >> number;
//			printf("0.000");
//			cout<<"%"<<endl;
//			//continue;
//		}
//	}
//	return 0;
//}  
