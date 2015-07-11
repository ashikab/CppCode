#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b, c, D, L, counter;

	while(cin >> a >> b >> c >> D >> L)
	{
		if((a == 0) && (b == 0) && (c == 0) && (D == 0) && (L == 0))
			break;
		else
		{
			counter = 0;
			for(int currentValue = 0;currentValue <= L;currentValue++)
			{
				int val = a * (currentValue * currentValue) + b * currentValue + c;
				if(val % D == 0)
					counter++;
			}
		}

		printf("%d\n", counter);
	}

    return 0;
}