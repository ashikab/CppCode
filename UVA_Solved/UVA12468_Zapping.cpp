//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main() {
//    int firstchannel, secondchannel, diff, resOne, resTwo;
//	while(scanf("%d%d",&firstchannel, &secondchannel) == 2)
//	{
//		if(firstchannel == -1 && secondchannel == -1)
//			break;
//		else
//		{
//			diff = firstchannel - secondchannel;
//			if(diff < 0)
//			{
//				resOne = diff + 100; // ex.. go from 0 to 97 backward
//				resTwo = diff * (-1); // ex.. go from 0 to 97 forward
//			}
//			else
//			{
//				resOne = 100 - diff; // ex.. go from 97 to 0 forward 
//				resTwo = diff; // ex.. go from 97 to 0 backward
//			}
//
//			if(resOne < resTwo)
//				printf("%d\n",resOne);
//			else
//				printf("%d\n",resTwo);
//		}
//	}
//    return 0;
//}