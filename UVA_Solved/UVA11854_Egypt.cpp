#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c))
	{
		if((a == 0) && (b == 0) && (c == 0))
			break;
		else
		{
			a = a * a;
			b = b * b;
			c = c * c;
			if((a + b) == c)
				cout << "right" <<endl;
			else if((a + c) == b)
				cout << "right" <<endl;
			else if((b + c) == a)
				cout << "right" <<endl;
			else
				cout << "wrong" <<endl;
		}
	}
	return 0;
}