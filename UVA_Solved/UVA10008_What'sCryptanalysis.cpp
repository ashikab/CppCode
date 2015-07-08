#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <map>
#include <vector>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

/* I have tried to solve it using the same algorithm used in UVA-10062 */

int main()
{
	int t;

	while(cin >> t)
	{
		string str, temp;
		int freq[26] = {0};
		int max_freq, cur_freq, len;

		while(getchar() != '\n');	// Get each line in temp and store in input

		while(t--)
		{
			getline(cin, temp, '\n');
			str += temp;
		}

		vector<char> charVec;
		vector<int> intVec;
		map<char, int> indexOf;
		len = str.size();


		for(int k = 0;k < len;k++)
		{
			char s = str[k]; 
			int ascii = s - '0' + 48;

			if(ascii >= 97 && ascii <= 122) //if lowercase, convert to uppercase
			{
				s = s + 'A' - 'a';
				ascii = s - '0' + 48;
			}

			if((ascii >= 65) && (ascii <= 90)) // consider only words
			{
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
		}

		for(int i = 0; i < charVec.size();i++) // store frequencies of the chars...
		{
			char c = charVec[i];
			intVec.push_back(indexOf[c]);
		}

		sort(intVec.begin(), intVec.end()); // frequency is sorted now.

		for(int i = intVec.size() - 1; i >= 0;i--)
		{
			int ascii, k = 0, min = 5000;
			char ch;

			while(k < intVec.size())
			{
				char c = charVec[k];
				ascii = c - '0' + 48;

				if(intVec[i] == indexOf[c]) // 'i'th value is compared with each elem of the map.
				{
					if(ascii < min) // when multiple frequency are same, take the minimum.
					{
						min = ascii;
						ch = c;
					}
				}
				k++;
			}

			cout << ch << " " << indexOf[ch] << endl;
			indexOf[ch] = -1; // Once taken, should not be considered further.(Needde when multiple char has same freq.)
		}
	}
	return 0;
}

