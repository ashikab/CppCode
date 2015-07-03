#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <stdint.h>

using namespace std;

int main()  problem#.12527
{

	int temp1, temp2,startNum,endNum,count;
	int array1[10];

	while(cin >> startNum >> endNum)
	{
		count = 0;
		for (int i = startNum; i <= endNum; i++)
		{
			for (int k = 0; k < 10; k++)
			{
				array1[k] = -1;
			}

			bool cancel = false;
			temp2 = i;

			while (temp2 != 0)
			{
				temp1 = temp2 % 10;
				if (array1[temp1] == -1)
				{
					array1[temp1] = temp1;
					temp2 = temp2 / 10;
				}
				else
				{
					cancel = true;
					temp2 = temp2 / 10;
				}
			}
			if (cancel == false)
			{
				count++;
			}
		}
		cout << count << endl;
	}
}