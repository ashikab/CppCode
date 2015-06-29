///////////////// start of adjList//////////////////////////////////////
  //#include<cstdio>
//#include<vector>
//using namespace std;
//#define MAX 1000 //maximum node
//int main()
//{
//	int edges,node,i,j;
//	vector<int>edge[MAX];
//	vector<int> cost[MAX];
//	scanf("%d %d",&node,&edges);
//	for(i=0;i<edges;i++)
//	{
//		int x,y;
//		scanf("%d %d",&x,&y);
//		edge[x].push_back(y);
//		cost[x].push_back(1);
//	}
//	printf("Connected :\n");
//	
//	for(j=1;j<=node;j++)
//	{
//		int outCount = 0,inCount = 0;
//		printf("%d ->:",j);
//		for(i=0; i < edge[j].size() ; i++) //print connection between nodes and out degree
//		{
//			printf("%d ",edge[j][i]);
//			outCount++;
//		}
//		for(int k = 1;k <= node;k++) //print in degree
//		{
//			for(int m = 0;m < edge[k].size();m++)
//			{
//				if(edge[k][m] == j)
//					inCount++;
//			}
//		}
//		printf("\n Out Degree for Node-%d is %d and In Degree is %d", j, outCount, inCount);
//		printf("\n");
//	}
//	return 0;
//}
//
/*
7 10
2 1
3 1
1 4
1 6
7 2
5 3
4 7
5 4
7 6
6 6
*/