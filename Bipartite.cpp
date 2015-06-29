//#include<cstdio>
//#include<iostream>
//#include<conio.h>
//#include<queue>
//#include<vector>
//#define NOCOLOR -1
//#define BLUE 0
//#define RED 1
//using namespace std;
//
//vector<int>Edge[100];
//
//bool isBipartite(int node, int src)
//{
//	int colorArr[100];
//	for (int i = 1; i <= node; ++i)
//		colorArr[i] = NOCOLOR;
//
//	colorArr[src] = RED;
//
//	queue <int> q;
//	q.push(src);
//
//	while (!q.empty())
//	{
//		int u = q.front();
//		q.pop();
//
//		for (int v = 0; v < Edge[u].size(); ++v)	// Find all non-colored adjacent vertices
//		{
//			if (colorArr[Edge[u][v]] == NOCOLOR)
//			{
//				// Assign alternate color to this adjacent v of u
//				colorArr[Edge[u][v]] = RED - colorArr[u]; // (RED-RED) = 0 = BLUE  and (RED-BLUE) = 1 = RED
//				q.push(Edge[u][v]);
//			}
//
//			//  If two connected edge assigned by same color, then the graph is not bipartite
//			else if (colorArr[Edge[u][v]] == colorArr[u])
//				return false;
//		}
//	}
//
//	// If we reach here, then all adjacent vertices can be colored with alternate color
//	return true;
//}
//
//int main()
//{
//	int edges, node, source;
//	printf("Enter number of nodes and edges\n");
//	scanf("%d %d", &node, &edges);
//	
//	//Graph is undirected
//	printf("Enter Adjacency list and their ascociated cost\n");
//	for(int i=0;i<edges;i++)
//	{
//		int x,y;
//		scanf("%d %d",&x,&y);
//		Edge[x].push_back(y);
//		Edge[y].push_back(x);
//		source = x;
//	}
//
//	isBipartite(node, source) ? cout << "Yes" : cout << "No";
//	return 0;
//}

/*
1 2
1 3
2 4
3 5
4 6
5 6

no
1 2
1 5
1 4
2 5
2 3
3 4

yes
1 2
1 3
1 4
2 7
3 6
4 6
5 7

no
1 2
1 3
1 4
2 7
3 6
4 5
4 6
5 7

special(node = 5 and edge = 4)yes there is a unconnected node
1 2
1 3
2 4
3 4
*/
