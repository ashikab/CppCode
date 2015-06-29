// ************************Topological Sort Start*************************
  //#include<cstdio>
//#include<vector>
//using namespace std;
//#define ZERO 0
//#define NO 0
//#define YES 1
//#define MAX 1000 //maximum node
//
//int main()
//{
//	int edges, node, index=1;
//	int arrIncount[MAX]={ZERO}, checked[MAX]={NO}, result[MAX];
//	vector<int>edge[MAX];
//	
//	scanf("%d %d",&node,&edges);
//	for(int i=0;i<edges;i++)
//	{
//		int x,y;
//		scanf("%d %d",&x,&y);
//		edge[x].push_back(y);
//	}
//	
//	for(int j = 1;j <= node;j++)
//	{
//		int inCount = 0;
//		//printf("%d ->:",j);
//		//for(int i=0; i < edge[j].size() ; i++) //print connection between nodes
//		//{
//		//	printf("%d ",edge[j][i]);
//		//}
//		for(int k = 1;k <= node;k++) //print in degree
//		{
//			for(int m = 0;m < edge[k].size();m++)
//			{
//				if(edge[k][m] == j)
//					inCount++;
//			}
//		}
//		arrIncount[j] = inCount;
//
//		printf("\n In Degree for Node-%d is %d ", j, inCount);
//		printf("\n");
//	}
//	
//	while(index <= node) //Do sorting...
//	{
//		for(int c = 1;c <= node;c++)
//		{
//			if(arrIncount[c] == 0 && checked[c] == NO)
//			{
//				result[index] = c; //Take this node...
//				index++;
//				checked[c] = YES; //Avoid repetation of node...
//				for(int i=0; i < edge[c].size() ; i++)
//				{
//					arrIncount[edge[c][i]]--; // Reduce InDegree by one from the connected node.. 
//				}
//			}
//		}
//	}
//	
//	for(int k = 1;k <= node;k++)
//	{
//		if(k != node)
//			printf("Task %d ->", result[k]);
//		else
//			printf("Task %d", result[k]);
//	}
//	return 0;
//}
///*
//6 8
//1 5
//1 3
//3 4
//5 2
//2 4
//4 6
//2 6
//5 6
//***
//6 8
//1 3
//2 3
//3 4
//3 5
//3 6
//4 5
//4 6
//5 6
//*/
//************************Topological Sort Finish*************************