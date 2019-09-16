#include<iostream>
int main()
{
	int j=1;
	int n;
	std::cin>>n;
	for(int i=2;i<=n;i++)
	{
		int c=0;
		
	while(j<=i)
	 { 
		if(i%j==0)
		{
			c++;			
		}j++;
		
		if(c==2){std::cout<<i<<" ";}
	 }
	}
}
