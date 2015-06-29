//*******************Qsort starts**************************
/////*	Algorithm ca be found at D:\BackUp(code,Projects)\Slides 
////	Simulation can be found at khata.
////*/
////
////#include<stdio.h>
////
////void swap (int a[], int left, int right)
////{
////	int temp;
////	temp=a[left];
////	a[left]=a[right];
////	a[right]=temp;
////}//end swap
////
////int partition(int[],int,int,int);
////void printarray(int a[], int);
////
////void quicksort( int a[], int low, int high, int total )
////{
////	int pivot;
////	// Termination condition!
////	if ( high > low )
////	{
////		pivot = partition( a, low, high, total );
////		quicksort( a, low, pivot-1, total );
////		quicksort( a, pivot+1, high, total );
////	}
////} //end quicksort
////
////int partition( int a[], int low, int high, int total )
////{
////	int left, right, pivot_item;
////	int pivot = left = low;
////	pivot_item = a[low]; // initially it is the left most item of the array
////	right = high;
////	while ( left < right )
////	{
////		while( a[left] <= pivot_item ) // Move left while item < pivot
////			left++;
////		while( a[right] > pivot_item ) // Move right while item > pivot
////			right--;
////		if ( left < right )
////			swap(a,left,right);
////	}
////	
////
////	a[low] = a[right]; // Be careful..it is low not left
////	a[right] = pivot_item;
////	
////	printf("\inside partison: \n");
////	printarray(a,total);
////	return right;
////}//end partition
////
////
////int main()
////{
////	int a[50], i, n;
////	printf("\nEnter no. of elements: ");
////	scanf("%d", &n);
////	printf("\nEnter the elements: \n");
////	for (i=0; i<n; i++)
////		scanf ("%d", &a[i]);
////	printf("\nUnsorted elements: \n");
////	printarray(a,n);
////	quicksort(a,0,n-1,n);
////	printf("\nSorted elements: \n");
////	printarray(a,n);
////	return 0;
////}//end main
////
////
////void printarray(int a[], int n)
////{
////	int i;
////	for (i=0; i<n; i++)
////		printf(" %d ", a[i]);
////	printf("\n");
////}//end printarray
////
//////40 20 10 80 60 50 7 30 100                             
//***************************Qsort Ends**************************
                            