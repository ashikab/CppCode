//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//void convBangla(long long int, bool);
//bool controller = false;
//
//int main()
//{
//	int cases = 0;
//	long long int number;
//	bool tooLarge = false; 
//	while(cin >> number)
//	{
//		cases++;
//		if(number == 0)
//		{
//			printf("%4d. ",cases);
//			cout << number<<endl;
//		}
//		else
//		{
//			if(number < 0)
//				number *= -1;
//			long long int temp, temp2 = 0, subtraction = 1;
//			temp = number;
//			int k = 0,j = 0;
//
//			while(temp != 0)
//			{
//				temp /= 10;
//				k++;
//			}
//
//			temp = number;
//
//			printf("%4d. ",cases);
//			if(k >= 9)
//			{
//				tooLarge = true;
//				while(j < 7)
//				{
//					temp /= 10;
//					j++;
//					subtraction *= 10;
//				}
//				temp2 = temp;
//				convBangla(temp2, tooLarge);
//				if(controller == false)
//					cout<<" kuti ";
//				else
//				{
//					cout<<"kuti ";
//					controller = false;
//				}
//			}
//			tooLarge = false;
//			number -= (temp2 * subtraction);
//			convBangla(number, tooLarge);
//			}
//	}
//	return 0;
//}
//
//void convBangla(long long int temp, bool tooLarge)
//{
//	while(temp != 0)
//	{
//		long long int subtraction = 1;
//		long long int res = temp;
//		int k = 0,j = 0;
//
//		while(res != 0)
//		{
//			res /= 10;
//			k++;
//		}
//
//		res = temp;
//
//		if(k == 8 || k == 9)
//		{
//			while(j < 7)
//			{
//				res /= 10;
//				j++;
//				subtraction *= 10;
//			}
//			controller = true;
//			cout << res <<" kuti ";
//			temp -= (res * subtraction); 
//		}
//		else if(k == 6 || k == 7)
//		{
//			while(j < 5)
//			{
//				res /= 10;
//				j++;
//				subtraction *= 10;
//			}
//			controller = true;
//			cout << res <<" lakh ";
//			temp -= (res * subtraction); 
//		}
//		else if(k == 4 || k == 5)
//		{
//			while(j < 3)
//			{
//				res /= 10;
//				j++;
//				subtraction *= 10;
//			}
//			controller = true;
//			cout << res <<" hajar ";
//			temp -= (res * subtraction); 
//		}
//		else if(k == 3)
//		{
//			while(j < 2)
//			{
//				res /= 10;
//				j++;
//				subtraction *= 10;
//			}
//			controller = true;
//			cout << res <<" shata ";
//			temp -= (res * subtraction); 
//		}
//		else if(k == 2 || k == 1)
//		{
//			if(tooLarge == true)
//				cout << res<<" ";
//			else
//				cout<< res;
//			temp -= (res * subtraction); 
//		}
//	}
//	if(tooLarge == false)
//		cout<<endl;
//}
