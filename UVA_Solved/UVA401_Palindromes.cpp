//
//#include<iostream>
//#include<sstream>
//#include<utility>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<cstdio>
//#include<cctype>
//#define MAX 3000
//using namespace std;
//
//int main()
//{
//	string mainStr;
//	char mirror[3000]={NULL};
//	mirror['A'] = 'A';
//	mirror['E']='3';	// At the position of ASCII code "E" it puts ASCII of 3; mirror[69/E] =51/3 
//	mirror['H']='H';
//	mirror['I']='I';
//	mirror['J']='L';
//	mirror['L']='J';
//	mirror['M']='M';
//	mirror['O']='O';
//	mirror['S']='2';
//	mirror['T']='T';
//	mirror['U']='U';
//	mirror['V']='V';
//	mirror['W']='W';
//	mirror['X']='X';
//	mirror['Y']='Y';
//	mirror['Z']='5';
//	mirror['1']='1';
//	mirror['2']='S';
//	mirror['3']='E';
//	mirror['5']='Z';
//	mirror['8']='8';
//
//	/*
//	scanf and printf failed to work for string, they works for char
//	*/
//
//	while(cin>>mainStr)
//	{
//		string palinStr, mirrorStr;
//		int len = mainStr.size();
//		int temp = len - 1;
//		for(int i = 0;i < len;i++)
//		{
//			palinStr += mainStr[temp];
//			mirrorStr += mirror[mainStr[temp]];
//			temp--;
//		}
//		if (mainStr == palinStr && mainStr == mirrorStr)
//			//printf("%s -- is a mirrored palindrome.\n\n",mainStr);
//			cout<<mainStr<<" -- is a mirrored palindrome."<<endl<<endl;
//		else if (mainStr == palinStr && mainStr != mirrorStr)
//			//printf("%s -- is a regular palindrome.\n\n",mainStr);
//			cout<<mainStr<<" -- is a regular palindrome."<<endl<<endl;
//		else if (mainStr != palinStr && mainStr == mirrorStr)
//			//printf("%s -- is a mirrored string.\n\n",mainStr);
//			cout<<mainStr<<" -- is a mirrored string."<<endl<<endl;
//		else
//			//printf("%s -- is not a palindrome.\n\n",mainStr);
//			cout<<mainStr<<" -- is not a palindrome."<<endl<<endl;
//		//cout << "At last u get" << mainStr[len-1];
//	}
//	return 0;
//}