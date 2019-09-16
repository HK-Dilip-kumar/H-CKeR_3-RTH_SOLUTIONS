#include<iostream>
int main()
{
	int c=0,n,i=1;
	//	std::cin>>n;
	for(int z=1;z<9;z++)
	{
		{
						n=z;
			while(i<=n)
			{	
				if(n%i==0)
				{
				c++;
				}
			  i++;
			}   
			if(c==2)
			{
				std::cout<<n<<" ";
			}
		}
//			std::cout<<n;
	}
}













