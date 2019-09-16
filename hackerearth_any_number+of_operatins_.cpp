#include<iostream>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long int n;
		std::cin>>n;
		while(n!=1)
    	{
    		if(n%2==0)
    		{
    			n=n/2;
    		}
    		else
    		{
    			n=3*n+1;
    		}
	        if(n==0)
	        {
	        std::cout<<"NO"<<"\n";
	        exit(0);
	        }
	  }
	std::cout<<"YES"<<"\n";
	}
}

