#include<cstdio>
#include<map>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
 
string str = "abcdefghijklmnopqrstuvwxyz";
map<string,int>m;

void createIndex()
{
	int index = 1;
	string s, s1, s2, s3, s4, s5;
	for(int i = 0;i < 26;i++)
	{
		s = str[i];
		m[s] = index;
		index++;
	}
	for(int i = 0;i < 26;i++)
	{
		for(int j = i + 1;j < 26;j++)
		{
			s1 = str[i];
			s2= str[j];
			s = s1 + s2;
			m[s] = index;
			index++;
		}
	}
	for(int i = 0;i < 26;i++)
	{
		for(int j = i + 1;j < 26;j++)
		{
			for(int k = j + 1;k < 26;k++)
			{
				s1 = str[i];
				s2 = str[j];
				s3 = str[k];
				s = s1 + s2 + s3;
				m[s] = index;
				index++;
			}
		}
	}
	for(int i = 0;i < 26;i++)
	{
		for(int j = i + 1;j < 26;j++)
		{
			for(int k = j + 1;k < 26;k++)
			{
				for(int n = k + 1;n < 26;n++)
				{
					s1 = str[i];
					s2 = str[j];
					s3 = str[k];
					s4 = str[n];
					s = s1 + s2 + s3 + s4;
					m[s] = index;
					index++;
				}
			}
		}
	}
	for(int i = 0;i < 26;i++)
	{
		for(int j = i + 1;j < 26;j++)
		{
			for(int k = j + 1;k < 26;k++)
			{
				for(int n = k + 1;n < 26;n++)
				{
					for(int p = n + 1;p < 26;p++)
					{
						s1 = str[i];
						s2 = str[j];
						s3 = str[k];
						s4 = str[n];
						s5 = str[p];
						s = s1 + s2 + s3 + s4 + s5;
						m[s] = index;
						index++;
					}
				}
			}
		}
	}
}

int main()
{
    char s[20];
    createIndex();
    while(scanf("%s",s) == 1)
    {
        printf("%d\n", m[s]);
    }
    return 0;
}