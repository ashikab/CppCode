
//#include<iostream>
//#include<list>
//#include<string>
//#include<cstring>
//#include<sstream>
//#include<cctype>
//#include<string.h>
//#include<algorithm>
//#include<cmath>
//#include<stack>
//#include<fstream>
//#include<cstdlib>
//#include<vector>
//#include<map>
//#include<utility>
//#include<iomanip>
//#include<queue>
//#define SUPERPARENT 200002
//#define MAX 200002
//#define NO 0
//#define YES 1
//using namespace std;
//
//vector<int>Edge[200001], Cost[200001];
//int parent[200001];
//int shouldProcess[200001];
//int find(int);
//int uni(int,int);
//
//void Init(int node){
//	//memset(parent, 0, sizeof(parent));
//	//memset(shouldProcess, 0, sizeof(parent));
//	for(int i = 0;i < node;i++){
//		Edge[i].clear();
//		Cost[i].clear();
//		parent[i] = SUPERPARENT;
//		shouldProcess[i] = NO;
//	}
//}
//
//int main()
//{	
//	int edges, node;
//	while(scanf("%d %d", &node, &edges) == 2)
//	{	
//		int totalcost = 0, minCost = 0;
//		if(edges == 0)
//		{
//			if(node == 0)
//				break;
//			else
//			{
//				Init(node);
//				cout << (totalcost - minCost) << endl;
//			}
//		}
//		else
//		{
//			Init(node);
//			int source, a, b, m, n, min, totalEdge = 1;
//			for(int i = 0;i < edges;i++)
//			{
//				int x,y,cost;
//				scanf("%d %d %d",&x,&y,&cost);
//				totalcost += cost;
//				source = x;
//				Edge[x].push_back(y);
//				Edge[y].push_back(x);
//				Cost[x].push_back(cost);
//				Cost[y].push_back(cost);
//				parent[i] = SUPERPARENT;
//				shouldProcess[i] = NO;
//			}
//
//			shouldProcess[source] = YES;
//			//printf("\nThe edges of Minimum Cost Spanning Tree are\n\n");
//
//			while(totalEdge < node)
//			{
//				min= 10000;
//				for(int c = 0;c < node;c++)
//				{
//					if(shouldProcess[c] == YES) //check whether it is necessary to explore this nodes neighbour
//					{
//						for(int i = 0; i < Edge[c].size(); i++) // Take the closest node from the processing node.
//						{
//							int v = Edge[c][i];
//							int vcost = Cost[c][i];
//
//							if(vcost < min)
//							{
//								min = vcost;
//								a = m = c;
//								b = n = v;
//							}
//
//						}
//					}
//				}
//
//				m = find(m);
//				n = find(n);
//
//				if(uni(m , n)) //explanation can be found in kruskal
//				{
//					//printf("\n edge (%d,%d) =%d\n", a, b, min);
//					minCost += min;
//					totalEdge++;
//					shouldProcess[b] = YES; //next time this node will also be considered
//				}
//
//				for(int i = 0; i < Edge[a].size(); i++) //Ensures that if one edge once taken, it will never taken again
//				{
//					if(Edge[a][i] == b)
//						Cost[a][i] = MAX;
//				}
//				for(int i = 0; i < Edge[b].size(); i++) //Ensures that if one edge once taken, it will never taken again
//				{
//					if(Edge[b][i] == a)
//						Cost[b][i] = MAX;
//				}
//			}
//			//cout << "Cost: " << minCost <<endl;
//			cout << (totalcost - minCost) << endl;
//		}
//	}
//	return 0;
//}
//
//int find(int i)
//{
//	while(parent[i] != SUPERPARENT) //Loop until get a 0, if both node returns same parent then they will form a cycle.
//		i = parent[i];
//	return i;
//}
//int uni(int i,int j)
//{
//	if(i!=j)
//	{
//		parent[j] = i; // Now this node also included in the set
//		return 1;
//	}
//	return 0;
//}
//
//
///*Sample Input
//2 0
//4 5
//1 2 11
//1 4 21
//4 2 9
//2 3 10
//3 1 22
//7 11
//1 2 7
//1 4 5
//2 3 8
//2 4 9
//2 5 7
//3 5 5
//4 5 15
//4 6 6
//5 6 8
//5 7 9
//6 7 11
//
//5 7
//0 1 6
//0 2 5
//0 3 8
//1 4 7
//2 3 2
//2 4 6
//3 4 4
//*/