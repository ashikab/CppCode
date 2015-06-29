//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cctype>
//#include <sstream>
//#include <math.h>
//using namespace std;
//
//int main() {
//	double n;
//	double power = 2;
//	long long int k;
//	while(scanf("%lf",&n) == 1)
//	{
//		if((int)n == 0)
//			break;
//		k = (int)pow(n,1/power);
//		if((pow(n,1/power) - k) == 0.00000) // it is a square number
//			printf("yes\n");
//		else
//			printf("no\n");
//	}
//	return 0;
//}
//
////let n = 10, it has factor 1 2 5 10;so 1= on, 2 = off, 5 = on, 10 = off
////let n = 13(prime) it has factor 1 13;so 1= on, 13 = off
////but if n is a sq number, let 16, it has factor 1 2 4 8 16(number of factors is odd) so it is on