//#include<stdio.h>
//#include<string.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//		/****************** Algorithm ***************************
//		*														*
//		*			http://www.geeksforgeeks.org/magic-square/	*
//		*														*
//		*********************************************************/
//
//void generateSquare (int squareDimention)
//{
//	int row = squareDimention / 2;
//	int col = squareDimention - 1;
//
//	int magicSquare[25][25];
//    memset(magicSquare, 0, sizeof(magicSquare)); //// Cond-3
//
//	for(int num=1; num <= squareDimention * squareDimention; )
//	{
//		if(row == -1 && col == squareDimention)
//		{
//			row = 0;
//			col = squareDimention - 2;
//		}
//		else
//        {
//            if (col == squareDimention)	//1st condition helper if next number goes to out of square's right side
//                col = 0;
//            if (row < 0)	//1st condition helper if next number is goes to out of square's upper side
//                row = squareDimention - 1;
//        }
//
//		if(magicSquare[row][col]) // if yhis place already occupied
//		{
//			row++;
//			col = col - 2;
//			continue;
//		}
//		else
//		{
//			magicSquare[row][col] = num;
//			num++;
//		}
//		row--;
//		col++;
//	}
//
//	    // print magic square
//    printf("The Magic Square for n = %d:\nSum of each row or column %d:\n\n", squareDimention, squareDimention*(squareDimention * squareDimention + 1) / 2);
//	for(int i = 0; i < squareDimention; i++)
//    {
//        for(int j = 0; j < squareDimention; j++)
//            printf("%3d ", magicSquare[i][j]);
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int squareDimention;
//	while(cin >> squareDimention)
//	{
//		if(squareDimention % 2 == 0)
//		{
//			squareDimention++;
//		}
//		generateSquare (squareDimention);
//	}
//    return 0;
//}


                                                                         
