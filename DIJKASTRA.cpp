//#include "stdio.h"
//#define infinity 999
//#define SUPERPARENT 0
//
//void dij(int n,int source,int cost[10][10],int dist[])
//{
//	int i, u, min, count, w, flag[10], pathMap[100];
//	int parent[10] = {SUPERPARENT};
//	
//	for(i=1;i<=n;i++)
//		flag[i]=0,dist[i]=cost[source][i];
//	count=2;
//	
//	while(count<=n)
//	{
//		min=99;
//		for(w=1;w<=n;w++) //Take the node at closest distance
//		{	
//			if(dist[w]<min && !flag[w])
//			{
//				min=dist[w];
//				u=w;
//				if(parent[u] == SUPERPARENT)
//					parent[u] = source;
//			}
//		}
//		
//		flag[u]=1; //shall not visit it again
//		count++;
//		
//		for(w=1;w<=n;w++)
//		{
//			if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
//			{
//				dist[w] = dist[u] + cost[u][w];
//				parent[w] = u;
//			}
//		}
//	}
//
//	parent[source] = SUPERPARENT;
//	
//	//print PathMap...
//	for(int i = 1;i <= n;i++)
//	{
//		int destination = i, k = 0;
//		int finalDestination = destination;
//		if(destination != source)
//		{
//			printf("Path from %d to %d is ", source, i);
//			while(parent[destination] != SUPERPARENT) //Loop until reach SuperParent
//			{
//				pathMap[k] = parent[destination];
//				k++;
//				destination = parent[destination];
//			}
//			for(int m = k-1;m >= 0;m--)
//			{
//				printf("%d->",pathMap[m]);
//			}
//			printf("%d\n",finalDestination);
//		}
//	}
//}
//
//int main()
//{
//	int n, source, i, j, cost[10][10], dist[10];
//	printf("\n Enter the number of nodes:");
//	scanf("%d",&n);
//	printf("\n Enter the cost matrix:\n");
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			scanf("%d",&cost[i][j]);
//			if(cost[i][j]==0)
//				cost[i][j]=infinity;
//		}
//	}
//	printf("\n Enter the source matrix:");
//	scanf("%d",&source);
//	dij(n,source,cost,dist);
//	printf("\n Shortest path:\n");
//	for(i=1;i<=n;i++)
//	{
//		if(i != source)
//			printf("%d->%d,cost=%d\n", source, i, dist[i]);
//	}
//	return 0;
//}






///**************************************************************************
//							Sample Input
//vertices: 3
//0 8 6
//8 0 1
//6 1 0
//vertices: 7
//0 7 0 5 0 0 0
//7 0 8 9 7 0 0
//0 8 0 0 5 0 0
//5 9 0 0 15 6 0
//0 7 5 15 0 8 9
//0 0 0 6 8 0 11
//0 0 0 0 9 11 0
//**************************************************************************/