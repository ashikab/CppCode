//#include <iostream>
//#include <string>
//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <cmath>
//#include <stdint.h>
//
//using namespace std;
//bool isPalindrome(long long int num);
//long long int reverse(long long int input);
//
//int main() // problem#.10018
//{
//
//	long long int input,rev,res,temp;
//	int testcases;
//	cin >>testcases;
//
//	while(testcases != 0)
//	{
//		cin >> input;
//		if(isPalindrome(input))  // if the input itself is a palindrome.
//		{
//			cout << "0" <<" " << input <<endl;
//			testcases--;
//		}
//		else if(input < 0) // if input is negative.
//		{
//			int i = 1;
//			temp = -1 * input;
//			rev = reverse(temp);
//			res = rev + input;
//
//			while(res < 0)  // make the result positive.
//			{
//				temp = -1 * res;
//				rev = reverse(temp);
//				res = rev + res;
//				i++;
//			}
//			while(!isPalindrome(res))
//			{
//				rev = reverse(res);
//				res = rev + res;
//				i++;
//			}
//
//			cout << i <<" " << res << endl;
//			testcases--;
//		}
//		else
//		{
//			int i = 1;
//			rev = reverse(input);
//			res = input + rev;
//
//			while(!isPalindrome(res))
//			{
//				rev = reverse(res);
//				res = rev + res;
//				i++;
//			}
//			cout << i <<" " << res << endl;
//			testcases--;
//		}
//
//	}
//	return 0;
//}
//
//long long int reverse(long long int input)
//{
//	long long int rev = 0;
//	while(input != 0) // reverse a number...
//	{
//		rev = rev * 10;
//		rev = rev + (input % 10);
//		input = input / 10;
//	}
//	return rev;
//}
//
//bool isPalindrome(long long int num)
//{
//	long long int temp = reverse(num);
//	if(temp == num)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
