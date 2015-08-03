#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() 
{
	int n;
	scanf("%d\n\n", &n);
	while (n--) 
	{
		int totalCount = 0;
		map<string, int> logbook;
		vector<string> species;
		string name;

		while (true) 
		{
			getline(cin, name);
			if (name.length() == 0)
			{
				break;
			}
			if (logbook.count(string(name)) == 0)
			{
				species.push_back(name);
				logbook[string(name)] = 1;
			} 
			else
				logbook[string(name)] = logbook[string(name)] + 1;

			totalCount++;
		}

		sort(species.begin(), species.end());

		for(int i = 0; i < species.size();i++)
		{
			string c = species[i];
			cout << c;
			printf(" %.4lf\n", (double) logbook[c] / (double) totalCount * 100.0);
		}

		if (n > 0)
		{
			printf("\n");
		}
	}
	return 0;
}



/* --------------> Version 2 (A bit faster) <-------------- */
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() 
{
	int n;
	scanf("%d\n\n", &n);
	while (n--) 
	{
		int totalCount = 0;
		map<string, int> logbook;
		vector<string> species;
		string name;

		while (true) 
		{
			getline(cin, name);
			if (name.length() == 0)
			{
				break;
			}
			if (logbook.count(string(name)) == 0)
			{
				logbook[string(name)] = 1;
			} 
			else
				logbook[string(name)] = logbook[string(name)] + 1;

			totalCount++;
		}

		for (map<string, int>::iterator ti = logbook.begin(); ti != logbook.end(); ti++)
        {
            cout << ti->first;
			printf(" %.4lf\n", (double) ti->second / (double) totalCount * 100.0);
        }

		if (n > 0)
		{
			printf("\n");
		}
	}
	return 0;
}