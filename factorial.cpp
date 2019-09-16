#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{	int a;
	int mul=1;
	std::cin>>a;
	for(int i=a;i>=1;i--)
	{
		mul=mul*i;
	}
	std::cout<<mul;
}
