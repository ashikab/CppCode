//#include<cstdio>
//#include<string>
//#include <stdio.h>
//#include <map>
//#include<iostream>
//#include<queue>
//#include<vector>
//#define NOCOLOR -1
//#define BLUE 0
//#define RED 1
//using namespace std;
//
//int main()
//{
//	int edges, node, source;
//	int colorArr[205];
//	vector<int>Edge[300];
//	bool isBicolor;
//
//	while(cin >> node)
//	{
//		if(node == 0) break;
//
//		scanf("%d",&edges);
//
//		isBicolor = true;
//
//		for(int i=0;i<edges;i++)	// Undirected Graph
//		{
//			int x,y;
//			scanf("%d %d",&x,&y);
//			Edge[x].push_back(y);
//			Edge[y].push_back(x);
//			source = x;
//		}
//
//		for (int i = 0; i < node; ++i)
//			colorArr[i] = NOCOLOR;
//
//		colorArr[source] = RED;
//
//		queue <int> q;
//		q.push(source);
//
//		while (!q.empty())
//		{
//			if(isBicolor == false) break;
//
//			int u = q.front();
//			q.pop();
//
//			for (int v = 0; v < Edge[u].size(); v++)	// Find all non-colored adjacent vertices
//			{
//				if (colorArr[Edge[u][v]] == NOCOLOR)
//				{
//					// Assign alternate color to this adjacent v of u
//					colorArr[Edge[u][v]] = RED - colorArr[u]; // (RED-RED) = 0 = BLUE  and (RED-BLUE) = 1 = RED
//					q.push(Edge[u][v]);
//				}
//
//				//  If two connected edge assigned by same color, then the graph is not bipartite
//				else if (colorArr[Edge[u][v]] == colorArr[u])
//				{
//					cout << "NOT BICOLORABLE." << endl;
//					isBicolor = false;
//					break;
//				}
//			}
//		}
//		if(isBicolor == true)
//			cout << "BICOLORABLE." << endl;
//
//		for(int i = 0;i < node;i++)
//		{
//			Edge[i].clear();
//		}
//	}
//	return 0;
//}
//
///*
//1 2
//1 3
//2 4
//3 5
//4 6
//5 6
//
//no
//1 2
//1 5
//1 4
//2 5
//2 3
//3 4
//
//yes
//1 2
//1 3
//1 4
//2 7
//3 6
//4 6
//5 7
//
//no
//1 2
//1 3
//1 4
//2 7
//3 6
//4 5
//4 6
//5 7
//
//special(node = 5 and edge = 4)yes there is a unconnected node
//1 2
//1 3
//2 4
//3 4
//*/