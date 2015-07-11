#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testCase, totalPlayer, playersAge, res, caseNum = 0;

	scanf("%d",&testCase);
	while(testCase != 0)
	{
		vector<int>age;
		caseNum++;

		scanf("%d",&totalPlayer);
		for(int i = 0;i < totalPlayer;i++)
		{
			scanf("%d",&playersAge);
			age.push_back(playersAge);
		}
		
		sort(age.begin(), age.end());
		res = (totalPlayer - 1) / 2;

		cout << "Case " << caseNum << ": " << age[res] << endl;
		testCase--;
	}
    return 0;
}