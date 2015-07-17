#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

/******************************************************************
1- Compare a string with the rest.
2- Given two strings a and b, if a+b > b+a, then a comes before b
3- otherwise, b comes before a.
******************************************************************/

int main()
{
	int totalInput, num;

	while(scanf("%d",&totalInput) == 1)
	{
		int arr[55];
		vector<string>strVec;
		string str, res = "";

		if(totalInput == 0)
			break;

		for(int i = 0;i < totalInput;i++)
		{
			cin >> str;;
			strVec.push_back(str);
			arr[i] = 0;
		}
		
		for(int i = 0;i < totalInput;i++)
		{
			for(int j = i + 1;j < totalInput;j++)
			{
				if(strVec[i] + strVec[j] >= strVec[j] + strVec[i])
				{
					arr[i]++;
				}
				else
				{
					arr[j]++;
				}
			}
		}

		for(int i = 0;i < totalInput;i++)
		{
			int maxIndex = -1, max = -1;
			for(int j = 0;j < totalInput;j++)
			{
				if(arr[j] > max)
				{
					max = arr[j];
					maxIndex = j;
				}
			}
			res = res + strVec[maxIndex];
			arr[maxIndex] = -1;
		}
		cout << res << endl;

	}
    return 0;
}