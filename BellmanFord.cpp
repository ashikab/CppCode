////Bellman ford algorithm

/*
//Note : It works for directed graph only. 1 2 10 means there is an 
//		edge from 1 to 2 and cost is 10.
//
*/

#include <iostream>
#include<conio.h>
#include <cstdio>
#include<vector>
#define SUPERPARENT -1
#define No -1
#define YES 1
using namespace std;

#define MAXE 10000
#define MAXN 100

// This portion is done by array..... There is a flaw here. Source is always considered 1. 
/*
int main() {
	int node, edge, source, destination;
	int d[MAXN],edge_u[MAXE],edge_v[MAXE],edge_cost[MAXE], parentArr[MAXN], Reachable[MAXN], pathMap[MAXN];

	cout << "Total number of Node and Edge..." << endl;
	cin >> node >> edge;

	for(int i = 1;i <= node;i++)
	{
		d[i] = 1000000000;
		parentArr[i] = SUPERPARENT;
	}

	d[1] = 0; //distance to source is 0

	for(int i = 1;i <= edge;i++)
	{
		cin >> edge_u[i] >> edge_v[i] >> edge_cost[i];
	}

	cout << "Specify Source and Destination..." << endl;
	cin >> source >> destination;

	int neg_cycle = false;

	for(int step = 1;step <= node;step++)
	{
		int updated=  false;
		for(int i = 1;i <= edge;i++)
		{
			int u = edge_u[i],v = edge_v[i];
			if(d[u] + edge_cost[i] < d[v])
			{
				updated = true;
				if(step == node)neg_cycle = true; //If we can update in n'th step, there is a negative cycle
				d[v] = d[u] + edge_cost[i];
				parentArr[v] = u;
				//Reachable[i] = YES;
			}
		}
		if(updated == false)break; //If we can't update in a any step, no need to try anymore
	}

	if(neg_cycle == false)
	{
		for(int i = 1;i <= node;i++)
		{
			int temp = i, k = 0;
			if(temp != source)
			{
				printf("Path from %d to %d is ",source,temp);
				while(parentArr[temp] != SUPERPARENT) //Loop until reach SuperParent
				{
					pathMap[k] = parentArr[temp];
					k++;
					temp = parentArr[temp];
				}
				for(int m = k-1;m >= 0;m--)
				{
					printf("%d->",pathMap[m]);
				}
				printf("%d and associated cost is %d\n",i, d[i]);
			}
		}
	}
	else
		cout << "Negative cycle detected";

	getch();
	return 0;
}
*/

// This portion is done by Adj. list..... 
int main() {
	int node, edge, source, destination;
	int d[MAXN], parentArr[MAXN], Reachable[MAXN], pathMap[MAXN];
	vector<int>Edge[100], Cost[100];;

	cout << "Total number of Node and Edge..." << endl;
	cin >> node >> edge;

	for(int i = 1;i <= node;i++)
	{
		d[i] = 1000000000;
		parentArr[i] = SUPERPARENT;
	}

	for(int i = 1;i <= edge;i++)
	{
		int x,y,cost;
		scanf("%d %d %d",&x,&y,&cost);
		Edge[x].push_back(y);
		Cost[x].push_back(cost);
	}

	cout << "Specify Source and Destination..." << endl; // source ta lagbe but destination lage na.
	cin >> source >> destination;

	d[source] = 0;

	int step, neg_cycle = false;

	for(step = 1;step <= node;step++)
	{
		int updated=  false;
		for(int i = 1;i <= node;i++)
		{
			int costOfCurrentNode, costOfDestionNode, destinationNode;
			int currentNode = i;
			for(int k = 0; k < Edge[currentNode].size(); k++)
			{
				costOfCurrentNode = d[currentNode];
				destinationNode = Edge[currentNode][k];
				costOfDestionNode = Cost[currentNode][k];

				if(costOfCurrentNode + costOfDestionNode < d[destinationNode])
				{
					updated = true;
					if(step == node)neg_cycle = true; //If we can update in n'th step, there is a negative cycle
					d[destinationNode] = costOfCurrentNode + costOfDestionNode;
					parentArr[destinationNode] = currentNode;
					//Reachable[i] = YES;
				}
			}
		}
		if(updated == false)break; //If we can't update in a any step, no need to try anymore
	}

	//cout<<"----->"<<step<<endl;

	if(neg_cycle == false)
	{
		for(int i = 1;i <= node;i++)
		{
			int temp = i, k = 0;
			if(temp != source)
			{
				printf("Path from %d to %d is ",source,temp);
				while(parentArr[temp] != SUPERPARENT) //Loop until reach SuperParent
				{
					pathMap[k] = parentArr[temp];
					k++;
					temp = parentArr[temp];
				}
				for(int m = k-1;m >= 0;m--)
				{
					printf("%d->",pathMap[m]);
				}
				printf("%d and associated cost is %d\n",i, d[i]);
			}
		}
	}
	else
		cout << "Negative cycle detected";

	getch();
	return 0;
}

//
/*
//    Sample input file:
//    (Set-1)
//	3 3
//
    1 2 2
    2 3 3
    3 1 -100
//
//	1 2
//
//	(Set-2)
//	7 9
//
    1 2 10
    4 2 3
    1 4 4
	2 3 2
	4 3 6
	2 5 15
	3 6 2
	6 7 6
	7 5 3
//
//	1 5
//
*/