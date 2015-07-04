#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main ()
{
    int testCases; scanf ("%d", &testCases);
    int cases = 0;
 
    char urls [10][100];
    int rels [10];
 
    while ( testCases-- ) {
 
        int max = -1;
 
        for ( int i = 0; i < 10; i++ )
		{
            scanf ("%s %d", urls [i], &rels [i]); //at i'th row add this string...
            if(rels [i] >= max)
				max = rels [i];
        }
 
        printf ("Case #%d:\n", ++cases);
 
        for ( int i = 0; i < 10; i++ ) {
            if ( max == rels [i] )
			{
				printf ("%s\n", urls [i]);
				if(strcmp(urls [i],"www.alibaba.com") == 0)
					cout << "matched"<<endl;
				else
					cout << "mismatched"<<endl;
			}
        }
    }
 
    return 0;
}