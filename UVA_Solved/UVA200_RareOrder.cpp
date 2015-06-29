//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <utility>
//#include <set>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	char strArray [5000] [21], temp[21];
//	int len, k = 0, j = 0, containerArray[26] = {0};
//	while(scanf("%s",temp))
//	{
//		if (temp [0] == '#') // break condition
//			break;
//
//		len = strlen(temp);
//		for(int i = 0;i < len;i++)
//		{
//			strArray[k][i] = temp[i];
//		}
//
//		j = len;
//		while(j != 21) // DONE TO AVOID GARBAGE VALUE, MAKES STRING LENGTH SAME
//		{
//			strArray[k][j] = 'a';
//			j++;
//		}
//
//		k++;
//	}
//	for(int m = 0; m < j;m++)
//	{
//		for(int n = 0;n < k;n++)
//		{
//			if(strArray[n][m] > 64 && strArray[n][m] < 91)
//				containerArray[strArray[n][m] - 65]++; //containerArray[0] contains total count of "A" containerArray[1] contains total count of "B"
//			if(containerArray[strArray[n][m] - 65] == 1)
//				printf("%c", strArray[n][m]);
//		}
//	}
//	printf("\n");
//	return 0;
//}
