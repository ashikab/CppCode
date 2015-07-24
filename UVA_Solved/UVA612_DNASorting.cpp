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
	int testCase, lenOfStrings, numberOfString;
	string tmp;
	vector<pair<int, int> > store;
	vector<string> dna;

	scanf("%d", &testCase);

	while(testCase--)
	{
		store.clear();
		scanf("%d %d",&lenOfStrings, &numberOfString);

		while(numberOfString--)
		{
			cin >> tmp;
			dna.push_back(tmp);
			int count = 0;
			
			for(int k = 0;k < lenOfStrings;k++)
			{
				char s1, s2;
				for(int j = k + 1;j < lenOfStrings;j++)
				{
					s1 = tmp[k];
					s2 = tmp[j];

					if(s1 > s2)
					{
						count++;
					}
				}
			}

			store.push_back(pair<int, int> (count, dna.size()-1));
		}
		
		sort(store.begin(), store.end()); // sort w.r.t. count

		for (int i = 0; i < store.size(); i++)
		{
			cout << dna[store[i].second] << endl;
		}

		if (testCase)
		{
			cout << endl;
		}
	}
	return 0;
}


/*
1
5 3
ATTCC
CCATT
TATTC
*/