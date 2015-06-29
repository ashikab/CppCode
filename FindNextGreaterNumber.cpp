//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include<iostream>
//#include<sstream>
//#include<utility>
//using namespace std;
//
/////****************** Algorithm********************************************
////		*																		 *
////		*http://www.geeksforgeeks.org/find-next-greater-number-set-digits/		 *
////		*																		 *
////		**************************************************************************/
//
//void swap(char *a, char *b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void findNext(char number[], int n)
//{
//	//cout <<"First letter: " << number[n-n] << " and last letter " << number[n-1] << endl;
//	int i;
//	for(i = n - 1;i > 0;i--)
//	{
//		if(number[i] > number[i - 1])
//		{
//			break;
//		}
//	}
//
//	if (i==0)	//all digits are in descending order
//    {
//        cout << "Next number is not possible" << endl;
//        return;
//    }
//
//	int smallestDigitLargeThanValToBeSwapped,valToBeSwapped = number[i - 1];
//	for(smallestDigitLargeThanValToBeSwapped = n - 1;smallestDigitLargeThanValToBeSwapped > (i - 1);smallestDigitLargeThanValToBeSwapped--)
//	{
//		if(number[smallestDigitLargeThanValToBeSwapped] > valToBeSwapped)
//		{
//			break;
//		}
//	}
//
//	swap(&number[i - 1], &number[smallestDigitLargeThanValToBeSwapped]); //pass by reference, so change is permanent
//	sort(number + i, number + n);
//	cout << "Next number with same set of digits is " << number << endl;
//
//	return;
//}
//
//int main()
//{
//	while(true)
//	{
//		char number[100];
//		scanf("%s", number);
//		int n = strlen(number);
//		findNext(number, n);
//	}
//	return 0;
//}