#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main() 
{
	int arr[100];
	string str;

	while(cin >> str) 
	{
		int len = str.length();
		for(int i = 0;i < len; i++)
		{
			if(str[i] == 'B' || str[i] == 'F' || str[i] == 'P' || str[i] == 'V')
				arr[i] = 1;
			else if(str[i] == 'C' || str[i] == 'G' || str[i] == 'J' || str[i] == 'K' || str[i] == 'Q' 
				|| str[i] == 'S' || str[i] == 'X' || str[i] == 'Z')
			{
				arr[i] = 2;
			}
			else if(str[i] == 'D' || str[i] == 'T')
				arr[i] = 3;
			else if(str[i] == 'L')
				arr[i] = 4;
			else if(str[i] == 'M' || str[i] == 'N')
				arr[i] = 5;
			else if(str[i] == 'R')
				arr[i] = 6;
			else
				arr[i] = -1;
		}
		if(arr[0] != -1)
			printf("%d", arr[0]);

		for(int k = 1;k < len;k++)
		{
			if((arr[k] != arr[k-1]) && arr[k] != -1)
				printf("%d", arr[k]);
		}
		printf("\n");
	}
	return 0;
}