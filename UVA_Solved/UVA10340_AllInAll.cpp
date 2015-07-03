#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

bool found(string a, string b) 
{
	int k = 0;

	for(int i = 0;i < a.length();i++)
	{
		bool found = false;

		for(int j = k;j < b.length();j++) // Search this char after last matching.
		{
			if(a[i] == b[j])
			{
				found = true;
			}

			k++;

			if(found == true) // If match, proceed to next char of "a"
				break;
		}

		if(found == false) // // If this char not found in "b", no nned to search any more.
		{
			return false;
		}
	}
	return true;
}

int main() 
{
	string a, b;
	while(cin >> a >> b) 
	{
		if(a.length() > b.length())
			printf("No\n");
		else 
		{
			if(found(a, b))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
}
