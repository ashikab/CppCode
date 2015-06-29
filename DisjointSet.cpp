/*
	Data Structure : Disjoint set
	Note : It works for directed graph only. 1 2 means there is an edge from 1 to 2.
			and 1 is parent of 2.
	Ref: http://www.shafaetsplanet.com/planetcoding/?p=763
*/


//#include <iostream>
//#include<conio.h>
//#include <cstdio>
//using namespace std;
//
//#define MAXE 10000
//#define MAXN 100
//
//int parentArr[MAXN];
//
//int findParent(int nodeNumber)
//{
//	if (parentArr[nodeNumber] == nodeNumber)
//		return nodeNumber;
//	else
//	{
//		parentArr[nodeNumber] = findParent(parentArr[nodeNumber]);
//		return parentArr[nodeNumber];
//	}
//}
//
//int main() {
//	int node, edge, firstNode, secondNode, representativeNode;
//	int representativeNodes[MAXN],edge_u[MAXE],edge_v[MAXE];
//	bool nextInput = true;
//
//	cout << "Total number of Node and Edge..." << endl;
//	cin >> node >> edge;
//
//	for(int i = 1;i <= node;i++)
//	{
//		parentArr[i] = -1;
//	}
//
//	for(int i = 1;i <= edge;i++)
//	{
//		cin >> edge_u[i] >> edge_v[i];
//		parentArr[edge_v[i]] = edge_u[i];
//	}
//
//	cout<< "how many representative Nodes :" << endl;
//	cin >> representativeNode;
//
//	cout<< "Enter representative Nodes :" << endl;
//	for(int i = 1;i <= representativeNode;i++)
//	{
//		int k;
//		cin >> k;
//		parentArr[k] = k;
//	}
//
//	while(nextInput == true)
//	{
//		cout << "Enter 2 node to check whether they are on the same set..." << endl;
//		cin >> firstNode >> secondNode;
//
//		if((firstNode == -1) && (secondNode == -1))
//			nextInput=false;
//		else
//		{
//			int parentOfFirstNode = findParent(firstNode);
//			int parentOfSecondNode = findParent(secondNode);
//
//			if(parentOfFirstNode == parentOfSecondNode)
//				cout << "They are on the same set" << endl;
//			else
//				cout << "They are on different set" << endl;
//		}
//	}
//
//	getch();
//	return 0;
//}

/*
n-5 e-6(1-representative node)
1 4
1 5
1 3
4 3
5 2
2 3

n-8 e-9(1,6-representative node)
1 4
1 5
1 3
4 3
5 2
2 3
6 8
6 7
7 8

*/