#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     string n;
    long int k,t;
    cin>>n>>k;
    t=k;
	for(int i=0;i<n.length();i++)
	{
	    t--;
	    n[i]='9';
	    if(t<=0)
	    break;
	}
}

