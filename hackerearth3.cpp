#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
int main()
{
	char a[100],c[100];
	int i,j;
	std::cin>>a;
	int length=strlen(a)-1;
		for(i=length,j=0;i>=0;i--,j++)
		{
				c[j]=a[i];
		}
	if(!strcmp(c,a))
	{
		std::cout<<"YES";
	}
	else
	{
	std::cout<<"NO";
	}
}
	
