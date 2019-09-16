#include<iostream>
using namespace std;
int main()
{
	int left;
	int n;
	std::cin>>n;
	left=n;
	for(int i=1;i<=n;i++)
	{
		if(left-i*1==0)
		{
			std::cout<<"Patlu";
			break;
		}
		left=left-(i*1);
		if(left-i*2<=0)
		{
			std::cout<<"Motu";
			break;
		}
		left=left-(i*2);
	}
}



