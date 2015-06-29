//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int number, index, result, totalElement = 0;
//	vector<int>num;
//
//	while(scanf("%d",&number) == 1)
//	{
//		totalElement++;
//		num.push_back(number);
//		sort(num.begin(), num.end());
//		
//		if(totalElement % 2 == 1) // odd number of elements
//		{
//			index = (totalElement - 1) / 2;
//			printf("%d\n", num[index]);
//		}
//		else   // odd number of elements
//		{
//			index = (totalElement - 2) / 2;
//			result = (num[index] + num[index + 1]) / 2;
//			printf("%d\n", result);
//		}
//	}
//    return 0;
//}