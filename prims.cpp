//*******************Prims Star**************************
  ///* 
//	Unlike Kruskal I have implemented it using Adj list 
//	Algorithm Details: http://www.shafaetsplanet.com/planetcoding/?p=692
//*/
//
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
//vector<int>Edge[100], Cost[100];
//int parent[9]={SUPERPARENT};
//int find(int);
//int uni(int,int);
//
//int main()
//{
//	int edges, node, source, a, b, m, n, min, minCost = 0, totalEdge = 1;
//	int shouldProcess[9] = {NO};
//
//	printf("Enter number of nodes and edges and source node\n");
//	scanf("%d %d %d", &node, &edges, &source);
//	shouldProcess[source] = YES;
//	
//	printf("Enter Adjacency list and their ascociated cost\n");
//	for(int i = 0;i < edges;i++)
//	{
//		int x,y,cost;
//		scanf("%d %d %d",&x,&y,&cost);
//		Edge[x].push_back(y);
//		Edge[y].push_back(x);
//		Cost[x].push_back(cost);
//		Cost[y].push_back(cost);
//	}
//
//	printf("\nThe edges of Minimum Cost Spanning Tree are\n\n");
//	
//	while(totalEdge < node)
//	{
//		min= 10000;
//		for(int c = 1;c <= node;c++)
//		{
//			if(shouldProcess[c] == YES) //check whether it is necessary to explore this nodes neighbour
//			{
//				for(int i = 0; i < Edge[c].size(); i++) // Take the closest node from the processing node.
//				{
//					int v = Edge[c][i];
//					int vcost = Cost[c][i];
//
//					if(vcost < min)
//					{
//						min = vcost;
//						a = m = c;
//						b = n = v;
//					}
//
//				}
//			}
//		}
//	
//		m = find(m);
//		n = find(n);
//
//		if(uni(m , n)) //explanation can be found in kruskal
//		{
//			printf("\n edge (%d,%d) =%d\n", a, b, min);
//			minCost += min;
//			totalEdge++;
//			shouldProcess[b] = YES; //next time this node will also be considered
//		}
//		
//		for(int i = 0; i < Edge[a].size(); i++) //Ensures that if one edge once taken, it will never taken again
//		{
//			if(Edge[a][i] == b)
//				Cost[a][i]=10000;
//		}
//		for(int i = 0; i < Edge[b].size(); i++) //Ensures that if one edge once taken, it will never taken again
//		{
//			if(Edge[b][i] == a)
//				Cost[b][i]=10000;
//		}
//	}
//	cout<<"Total Cost: "<<minCost;
//	getch();
//	return 0;
//}
//
//int find(int i)
//{
//	while(parent[i] != SUPERPARENT) //Loop until get a 0, if both node returns same parent then they will form a cycle.
//		i=parent[i];
//	return i;
//}
//int uni(int i,int j)
//{
//	if(i!=j)
//	{
//		parent[j]=i; // Now this node also included in the set
//		return 1;
//	}
//	return 0;
//}
//
//
///*Sample Input
//7 11 1
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
//5 7 1
//1 2 6
//1 3 5
//1 4 8
//2 5 7
//3 4 2
//3 5 6
//4 5 4
//*/
//*******************Prims ends**************************
                                  

