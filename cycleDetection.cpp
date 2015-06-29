///*
//****************** There are some wrong *******************
//*/
//#include<cstdio>
//#include<conio.h>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define SUPERPARENT 0
//#define NO 0
//#define YES 1
//using namespace std;
//
//vector<int>Edge[100];
//int parent[9] = {SUPERPARENT};
//
//int main()
//{
//	int edges, node, cycleFound = NO;
//	int visited[9] = {NO};
//
//	printf("Enter number of nodes and edges\n");
//	scanf("%d %d", &node, &edges);
//
//	printf("Enter Adjacency list\n");
//	for(int i = 1;i <= edges;i++)
//	{
//		int x,y;
//		scanf("%d %d",&x,&y);
//		Edge[x].push_back(y);
//		Edge[y].push_back(x);
//	}
//
//
//	for(int currentNode = 1;currentNode <= node;currentNode++)
//	{
//		if(cycleFound == NO)
//		{
//			if(visited[currentNode] == NO) //check whether it is visited or not
//			{
//				visited[currentNode] = YES;
//
//				for(int i = 0; i < Edge[currentNode].size(); i++)		// Explore its adjacent node
//				{
//					if(cycleFound == NO)
//					{
//						int adjacentNode = Edge[currentNode][i];			// fetch a node
//
//						if(visited[adjacentNode] == NO)
//						{
//							parent[adjacentNode] = currentNode;				// define its parent
//						}
//						else
//						{
//							if(parent[currentNode] != adjacentNode)
//							{
//								cout << "graph has Cycle";
//								cycleFound = YES;
//							}
//						}
//					}
//				}
//			}
//		}
//		else
//			break;
//	}
//
//	if(cycleFound == NO)
//		cout << "graph does not contain Cycle";
//
//	getch();
//	return 0;
//}
//
//
///*********************************************
//			Sample Input
//1 6
//1 7
//2 6
//2 4
//3 6
//3 5
//7 3
//*********************************************/
//                                  
//
