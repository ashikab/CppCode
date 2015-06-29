//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//
//    long int cycleNumber = 1;
//    long int result = 0, i = 0;
//    long int test_case;
//    long int first,second,startNum,endNum;
//
//    while(cin>> first >> second)
//    {
//        long int finalResult = 0;
//
//        if(first > second)
//        {
//            startNum = second;
//            endNum = first;
//        }
//        else
//        {
//            startNum = first;
//            endNum = second;
//        }
//
//        for(long int m = startNum ;m<=endNum; m++)
//        {
//            cycleNumber = 1;
//            long int k = m;
//            while(k != 1)
//            {
//                    if(k%2 == 1)
//                    {
//                        k = 3*k + 1;
//                    }
//                    else
//                    {
//                        k = k / 2;
//                    }
//
//                    cycleNumber++;
//
//            } // while loop terminated....
//
//            cycleNumber = cycleNumber + result;
//
//            if(cycleNumber >= finalResult)
//            {
//                finalResult = cycleNumber;
//            }
//
//        } // for loop terminated....
//
//       cout<< first <<" " << second <<" " << finalResult << endl;
//       // printf("\n");
//    }
//    return 0;
//}
//
