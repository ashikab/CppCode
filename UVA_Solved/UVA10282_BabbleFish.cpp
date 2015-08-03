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
	char entries[100];
	string eng, forgn;
	map <string, string> dictionary;

	while (gets (entries))
	{
		if(strlen(entries) == 0)
			break;
		
		char english[100], foreign[100];
		char * pch;

		pch = strtok (entries, " ");
		strcpy(english, pch);
		eng = english;

		pch = strtok (NULL, " ");
		strcpy(foreign, pch);
		forgn = foreign;

		dictionary[forgn] = eng;
	}
	while (gets (entries)) 
	{
		string t = dictionary[entries];
		if(t.size() == 0)
			cout << "eh" << endl;
        else
            cout << t << endl;
	}
	return 0;
}