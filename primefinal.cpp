#include<iostream>
int main()
{
	int n;
	std::cin>>n;
	for(int i=1;i<=n;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		{
			std::cout<<i<<" ";
		}
	}
}
