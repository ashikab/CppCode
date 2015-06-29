//Algorithm available in this link : http://mathforum.org/library/drmath/view/53211.html
//
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int main()
//{
//	long long int a, b, temp1, temp2, temp3, quotent, reminder, result, gcd;
//	while(cin >> a >> b)
//	{
//		long long int a_init, b_init, u1 = 1, u2 = 0, v1 = 0, v2 = 1;
//		a_init = a;
//		b_init = b;
//
//		if(a < b)
//		{
//			temp1 = a;
//			a = b;
//			b = temp1;
//		}
//		while((a % b) != 0)
//		{
//			quotent = a / b;
//			reminder = a % b;
//			a = b;
//			b = reminder;
//			
//			temp2 = u1;
//			u1 = u2;
//			u2 = (temp2 - (quotent * u2));
//			temp3 = v1;
//			v1 = v2;
//			v2 = (temp3 - (quotent * v2));
//		}
//		if(((a_init * u2) +(b_init * v2)) == b)
//			cout << u2 << " " << v2 << " " << b << endl;
//		else
//			cout<< v2 << " " << u2 << " " << b << endl;
//	}
//	return 0;
//}
