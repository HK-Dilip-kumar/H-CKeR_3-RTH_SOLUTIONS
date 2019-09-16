#include<iostream>
#include<math.h>
int main()
{
	int n;
	std::cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>A[i];
	}
	int answer=1;
	for(int j=0;j<5;j++)
	{
		answer=(answer*A[j])%(int)(pow(10,9)+7);
	}
	std::cout<<answer;
}
