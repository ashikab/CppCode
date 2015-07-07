#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

int main() 
{
	int len, flag = 0;
	string str;

	while(getline(cin,str))
	{
		int max;
		vector<char> charVec;
		vector<int> intVec;
		map<char, int> indexOf;
		len = str.size();

		if(flag != 0) // print a newline after first i/p
			cout<<endl;
		flag = 1;

		for(int k = 0;k < len;k++)
		{
			char s = str[k];

			if(find(charVec.begin(), charVec.end(), s) != charVec.end()) // found it
			{
				indexOf[s]++;
			}
			else // first occurence of that char.
			{
				charVec.push_back(s);
				indexOf[s] = 1;
			}
		}

		
		for(int i = 0; i < charVec.size();i++) // store frequencies of the chars...
		{
			char c = charVec[i];
			intVec.push_back(indexOf[c]);
		}

		sort(intVec.begin(), intVec.end()); // frequency is sorted now.

		for(int i = 0; i < intVec.size();i++)
		{
			int k = 0, max = -1;
			char ch;

			while(k < intVec.size())
			{
				char c = charVec[k];
				int ascii = c - '0' + 48;
				
				if(intVec[i] == indexOf[c]) // 'i'th value is compared with each elem of the map.
				{
					if(ascii > max) // when multiple frequency are same, take the maximum.
					{
						max = ascii;
						ch = c;
					}
				}
				k++;
			}

			cout << max << " " << indexOf[ch] << endl;
			indexOf[ch] = -1; // Once taken, should not be considered further.(Needde when multiple char has same freq.)
		}
	}
	return 0;
}