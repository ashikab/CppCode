#include <stdio.h>
#include <string.h>

int main ()
{
	int testcase,sum = 0,donation = 0;
	char a [100];
	scanf ("%d", &testcase);
	while ( testcase--)
	{
		scanf ("%s", a);
		if (strcmp (a, "report") == 0)
		{
			printf ("%d\n", sum);
		}
		else
		{
			scanf ("%d", &donation);
			sum = sum + donation;
		}
			
	}

	return 0;

}