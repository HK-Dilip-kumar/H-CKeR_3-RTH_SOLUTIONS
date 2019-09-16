#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string n;
    long int t,k,l;
    cin>>n>>k;
    l=n.length();
	t=min(k,l);
    for(int i=0;i<l;i++)
	{
		
		
		if(t<=0) break;
	    if(n[i]!='9')
	    {
	    	n[i]='9';
	    	t--;
		}	    
	}
	std::cout<<n;
}

