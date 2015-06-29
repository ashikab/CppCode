//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#define MAX 10000
//using namespace std;
//
//
//int main() 
//{
//	int testCase, farmer, total_Animal, env_frndlns, farmyard_size;
//	cin >> testCase;
//	for(int i = 0;i < testCase;i++)
//	{
//		long long int average, budget = 0, k = 1;
//		cin >> farmer;
//		vector<long long int> vec[MAX];
//		
//		while(farmer != 0)
//		{
//			cin >> farmyard_size >> total_Animal >> env_frndlns;
//			vec[k].push_back(farmyard_size);
//			vec[k].push_back(total_Animal);
//			vec[k].push_back(env_frndlns);
//			k++;farmer--;
//		}
//
//		for(int c = 1;c < k;c++)
//		{
//			//Dont need to consider 2nd colmn at all....
//			budget += vec[c][0] * vec[c][2];
//		}
//		cout << budget <<endl;
//	}
//	return 0;
//}