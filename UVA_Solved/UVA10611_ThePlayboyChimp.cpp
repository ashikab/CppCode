#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

/*	Special courtesy: https://f0rth3r3c0rd.wordpress.com/2011/08/21/uva-10611-the-playboy-chimp/	*/

int main() 
{
	int ladyChimps, high, low , mid;
	scanf("%d", &ladyChimps);

	int heightOfLadyChimp, totalQuery, heightOfChimp;
	vector<int>height;

	for(int i = 0;i < ladyChimps;i++)
	{
		scanf("%d", &heightOfLadyChimp);
		height.push_back(heightOfLadyChimp);
	}

	scanf("%d", &totalQuery);

	for(int i = 0;i < totalQuery;i++)
	{
		scanf("%d", &heightOfChimp);
		heightOfChimp--;
		high = ladyChimps - 1;
		low = 0;
		
		while(high - low > 1)
		{
			mid = (low + high) / 2;
			if(height[mid] > heightOfChimp)
				high = mid;
			else if(height[mid] < heightOfChimp)
				low = mid;
			else
			{
				high = mid;
				break;
			}
		}
		if(height[high] <= heightOfChimp)
			printf("%d ",height[high]);
		else if(height[low] <= heightOfChimp)
			printf("%d ",height[low]);
		else
			printf("X ");
		
		heightOfChimp += 2;
		high = ladyChimps - 1;
		low = 0;
		
		while(high - low > 1)
		{
			mid = (low + high) / 2;
			if(height[mid] > heightOfChimp)
				high = mid;
			else if(height[mid] < heightOfChimp)
				low = mid;
			else
			{
				high = mid;
				break;
			}
		}
		if(height[low] >= heightOfChimp)
			printf("%d\n",height[low]);
		else if(height[high] >= heightOfChimp)
			printf("%d\n",height[high]);
		else
			printf("X\n");

	}
	return 0;
}