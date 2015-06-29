/////start of BFS_With_Path_Cost_WithOutFunc///

//https://sites.google.com/site/smilitude/shortestpath

//#include<cstdio>
//#include<conio.h>
//#include<queue>
//#include<vector>
//#define SUPERPARENT 0
//#define NO 0
//#define YES 1
//using namespace std;
//
//vector<int>Edge[100], Cost[100];
//const int infinity = 1000000000;
//
//int bfs(int totalNode, int source, int destination)
//{
//	int d[100];
//	int visited[100] = {0}, allReadyPushed[100] = {NO};
//	int reachable[100] = {0}, parent[100] = {SUPERPARENT}, pathMap[100];
//
//	visited[source] = 1, reachable[source] = 1;
//
//	for(int i=0; i<100; i++)
//		d[i] = infinity;
//
//	queue<int> q;
//	q.push( source );
//	allReadyPushed[source] = YES;
//	d[ source ] = 0;
//
//	while(!q.empty())
//	{
//		int u = q.front();
//		q.pop();
//		int ucost = d[ u ];
//
//		for(int i=0; i<Edge[u].size(); i++)
//		{
//			int v = Edge[u][i];
//			int vcost = Cost[ u ][i] + ucost;
//			if(d[v] > vcost)
//			{
//				d[v] = vcost;
//				
//				//if i use this commented portion, 1st case will error(path from 1-2)
//				//if(allReadyPushed[v] == NO)
//				//{
//				//	q.push(v);
//				//	allReadyPushed[v] = YES;
//				//}
//
//				q.push(v);
//
//				parent[v] = u;
//				visited[v] = 1;   // make this node visited 
//				reachable[v] = 1; // make this node reachable
//			}
//		}
//	}
//	
//	//Print source to destination full path....
//	for(int i = 1;i <= totalNode;i++)
//	{
//		int temp = i, k = 0;
//		if(temp == destination)
//		{
//			if(reachable[temp] == 1) //This node can be reached
//			{
//				printf("Path from %d to %d is ",source,destination);
//				while(parent[temp] != SUPERPARENT) //Loop until reach SuperParent
//				{
//					pathMap[k] = parent[temp];
//					k++;
//					temp = parent[temp];
//				}
//				for(int m = k-1;m >= 0;m--)
//				{
//					printf("%d->",pathMap[m]);
//				}
//				printf("%d\n",destination);
//			}
//			else
//				printf("%d to %d distance cant be measured \n",source,destination);
//		}
//	}
//	//*********************************************************
//	return d[destination];
//}
//
//int main()
//{
//	int edges, node, source, destination, distance;
//	int nextInput = 1;
//	printf("Enter number of nodes and edges\n");
//	scanf("%d %d", &node, &edges);
//	
//	//Graph is undirected
//	printf("Enter Adjacency list and their ascociated cost\n");
//	for(int i=0;i<edges;i++)
//	{
//		int x,y,cost;
//		scanf("%d %d %d",&x,&y,&cost);
//		Edge[x].push_back(y);
//		Edge[y].push_back(x);
//		Cost[x].push_back(cost);
//		Cost[y].push_back(cost);
//	}
//
//	while(nextInput != 0)
//	{
//		printf("Do u need input: ");
//		scanf("%d", &nextInput);
//		if(nextInput != 0)
//		{
//			printf("Enter Source and Destination\n");
//			scanf("%d %d", &source, &destination);
//			distance = bfs(node, source, destination);
//			printf("Source to destination distance is %d \n",distance);
//		}
//	}
//	getch();
//	return 0;
//}

/**************************************************************************
Sample Input-1
4 4
1 3 22
1 4 10
3 4 2
2 3 1

5 8
1 2 1
1 3 3
1 4 6
2 3 1
2 5 5
3 4 2
3 5 2
4 5 1

7 11
1 2 7
1 4 5
2 3 8
2 4 9
2 5 7
3 5 5
4 5 15
4 6 6
5 6 8
5 7 9
6 7 11
**************************************************************************/
 ///End of BFS_With_Path_Cost_WithOutFunc///