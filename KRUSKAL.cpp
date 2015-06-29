///************************************************************************
//* You can use all the programs on  www.c-program-example.com			*
//* for personal and learning purposes. For permissions to use the		*
//* programs for commercial purposes,										*
//* contact info@c-program-example.com									*
//* To find more C programs, do visit www.c-program-example.com			*
//* and browse!															*
//*																		*
//*                      Happy Coding										*
//*************************************************************************/
//
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
//
//
//
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#define SUPERPARENT 0
//
//int i,j,k,a,b,u,v,n,ne=1;
//int min,mincost=0,cost[9][9],parent[9]={SUPERPARENT};
//int find(int);
//int uni(int,int);
//void main()
//{
//	printf("\n\n\tImplementation of Kruskal's algorithm\n\n");
//	printf("\nEnter the no. of vertices\n");
//	scanf("%d",&n);
//	printf("\nEnter the cost adjacency matrix\n");
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			scanf("%d",&cost[i][j]);
//			if(cost[i][j]==0)
//				cost[i][j]=999;
//		}
//	}
//	printf("\nThe edges of Minimum Cost Spanning Tree are\n\n");
//	while(ne  <n)
//	{
//		for(i = 1,min = 999;i <= n;i++)
//		{
//			for(j = 1;j <= n;j++)
//			{
//				if(cost[i][j] < min)
//				{
//					min = cost[i][j];
//					a = u = i;
//					b = v = j;
//				}
//			}
//		}
//		u = find(u);
//		v = find(v);
//		if(uni(u,v))
//		{
//			printf("\n%d edge (%d,%d) =%d\n",ne++, a, b, min);
//			mincost +=min;
//		}
//		cost[a][b]=cost[b][a]=999;
//	}
//	printf("\n\tMinimum cost = %d\n",mincost); //
//	getch();
//}
//int find(int i)
//{
//	while(parent[i] != SUPERPARENT) //Loop until get a 0, if both node returns same parent then they will form a cycle.
//		i=parent[i];
//	return i;
//}
//int uni(int i,int j)
//{
//	/*It checks whether it forms a cycle,if i !=j then they lie
//	  in different set and they dont form a a cycle.Simply check with
//	  3 nodes A, B, C where all connected and assume all have cost 1.
//	  1.A,B has been added	2.A,C has been added but at step 3
//	  B,C will not be added. Bcoz both of them have common parent 1
//	  and this function will return 0.*/
//	if(i!=j)
//	{
//		parent[j]=i; // Now this node also included in the set
//		return 1;
//	}
//	return 0;
//}