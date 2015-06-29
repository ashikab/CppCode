//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main() //problem#.102.....
//{
//
//    long int first,second,third,fourth,fifth,sixth,seventh,eigthth,nineth,startNum,endNum;
//    long int val1,val2,val3,val4,val5,val6,min;
//    int counter = 0;
//    string str;
//
//    while(cin>> first >> second>>third>>fourth>>fifth>>sixth>>seventh>>eigthth>>nineth)
//    {
//        val1 = second + third + fourth + fifth + seventh + nineth; //bcg
//        min = val1;
//        str = "BCG";
//
//        val2 = second + third + fourth + sixth + seventh + eigthth; //bgc
//        if(min > val2)
//        {
//            min = val2;
//            str = "BGC";
//        }
//        val3 = second + first + fifth + sixth + seventh + nineth; //cbg
//        if(min > val3)
//        {
//            min = val3;
//            str = "CBG";
//        }
//
//        val4 = second + first + fourth + sixth + eigthth + nineth; //cgb
//        if(min > val4)
//        {
//            min = val4;
//            str = "CGB";
//        }
//
//        val5 = third + first + fifth + sixth + seventh + eigthth; //gbc
//        if(min > val5)
//        {
//            min = val5;
//            str = "GBC";
//        }
//        val6 = third + first + fifth + fourth + eigthth + nineth; //gcb
//        if(min > val6)
//        {
//            min = val6;
//            str = "GCB";
//        }
//
//        cout << str << " " << min <<endl;
//    }
//    return 0;
//}