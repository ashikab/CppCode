//#include <iostream>
//#include <string>
//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <cmath>
//#include <stdint.h>
//
//using namespace std;
//
//int main()
//{
//
//    int testcases,startNum,endNum,temp,sum1,sum2,tempRes,res;
//    int i = 1;
//    cin >> testcases;
//    while(testcases != 0) // 100
//    {
//        temp = 0;
//        cin >> startNum;
//        cin >> endNum;
//        if(startNum > endNum)
//        {
//            cout <<"Case " << i <<": " << temp <<endl;
//            testcases--;
//            i++;
//        }
//        else
//        {
//            if(startNum < 0)
//            {
//                startNum = 1;
//            }
//            int sum1 = (endNum * (endNum + 1)) / 2;
//            int sum2 = (startNum * (startNum - 1)) / 2;
//            tempRes = sum1 - sum2;
//            for(int i = startNum; i <= endNum;i++)
//            {
//                if(i % 2 == 0)
//                {
//                    temp = temp + i;
//                }
//            }
//            res = tempRes - temp;
//            cout <<"Case " << i <<": " << res<<endl;
//            i++;
//            testcases--;
//        }
//
//    }
//    return 0;
//}