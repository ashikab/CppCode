//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int testcase, s, d, ans1, ans2, temp;
//	float t1, t2;
//	scanf("%d", &testcase);
//	while(testcase != 0)
//	{
//		scanf("%d %d", &s, &d);
//		if(s >= d)
//		{
//			t1 = (float)(s + d) / (float)2;
//			ans1 = (int)t1;
//			t2 = (float)(s - d) / (float)2;
//			ans2 = (int)t2;
//			if(t1 == ans1 && t2 == ans2)
//				cout << ans1 << " " << ans2 <<endl;
//			else
//				cout << "impossible" << endl;
//		}
//		else
//			cout << "impossible" << endl;
//		testcase--;
//	}
//	return 0;
//}