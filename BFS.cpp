/*
	It is assumed that all path cost is 1 and it is Undirected graph
*/

//#include<cstdio>
//#include<conio.h>
//#include<queue>
//#include<vector>
//#define SUPERPARENT 0
//using namespace std;
//
//vector<int>G[100];
//
//void bfs(int n,int src)
//{
//	queue<int>Q;
//	Q.push(src);
//	int visited[100] = {0}, pathMap[100], level[100], reachable[100] = {0};
//	int parent[100] = {SUPERPARENT};
//	visited[src] = 1;
//	level[src] = 0;
//	reachable[src] = 1; //Source is always reachable
//	while(!Q.empty())
//	{
//		int u=Q.front(); 
//		for(int i=0;i<G[u].size();i++)
//		{
//			int v=G[u][i];
//			if(!visited[v])
//			{
//				level[v]=level[u]+1;
//				parent[v]=u;
//				visited[v]=1; 
//				reachable[v]=1; // make this node reachable
//				Q.push(v);
//			}
//		}
//		Q.pop();
//	}
//	for(int i=1;i<=n;i++)
//	{
//		int temp = i;
//		int k = 0;
//		if(reachable[temp] == 1) //check if this node can be reached from source
//		{
//			printf("%d to %d distance %d \n",src,i,level[temp]);
//			printf("Path from %d to %d is ",src,temp);
//			while(parent[temp] != SUPERPARENT) //Loop until reach SuperParent
//			{
//				pathMap[k] = parent[temp];
//				k++;
//				temp = parent[temp];
//			}
//			for(int m = k-1;m >= 0;m--)
//			{
//				printf("%d->",pathMap[m]);
//			}
//			printf("%d\n",i);
//		}
//		else
//			printf("%d to %d distance cant be measured \n",src,i);
//	}
//	//getch();
//}
//
//int main() {
//	int edges, node, source, i, j;
//	printf("Enter number od nodes,edges and source vertex \n");
//	scanf("%d %d %d", &node, &edges, &source);
//	for(i=0;i<edges;i++)
//	{
//		int x,y;
//		scanf("%d %d",&x,&y);
//		G[x].push_back(y);
//	}
//	bfs(node, source);
//	//getch();
//	return 0;
//}

/*Sample Input
7 11 1
1 2
1 4
2 3
2 4
2 5
3 5
4 5
4 6
5 6
5 7
6 7

5 7 1
1 2
1 3
1 4
2 5
3 4
3 5
4 5
*/