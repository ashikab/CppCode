//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int testcase;
//	double Term1, Term2, Final, Attendance, CT1, CT2, CT3, num, caseNum, ctMark;
//	scanf("%d", &testcase);
//	for(caseNum = 1;caseNum <= testcase;caseNum++)
//	{
//		scanf("%lf %lf %lf %lf %lf %lf %lf", &Term1, &Term2, &Final, &Attendance, &CT1, &CT2, &CT3);
//		if(CT1 >= CT2) //take ct1
//		{
//			CT1 = CT1;
//			if(CT3 >= CT2) //take ct3
//				CT2 = CT3;
//			else
//				CT2 = CT2; //take ct3
//		}
//		else //take ct2
//		{
//			CT2 = CT2;
//			if(CT3 >= CT1)//take ct3
//				CT1 = CT3;
//			else
//				CT1 = CT1; //take ct3
//		}
//		ctMark = (CT1 + CT2) / (double)2;
//		num = Term1 + Term2 + Final + Attendance + ctMark;
//		if(num >= 90)
//			cout << "Case " << caseNum <<": A"<<endl;
//		else if(num >= 80 && num < 90)
//			cout << "Case " << caseNum <<": B"<<endl;
//		else if(num >= 70 && num < 80)
//			cout << "Case " << caseNum <<": C"<<endl;
//		else if(num >= 60 && num < 70)
//			cout << "Case " << caseNum <<": D"<<endl;
//		else
//			cout << "Case " << caseNum <<": F"<<endl;
//	}
//	return 0;
//}