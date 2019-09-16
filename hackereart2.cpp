#include<iostream>
int main()
{
	int i;
    int n,seat_type,input;
    int seat_number;
    const char* a[13]={"-","WS","MS","AS","AS","MS","WS","WS","MS","AS","AS","MS","WS"};
    int b[13]={0,12,11,10,9,8,7,6,5,4,3,2,1};
    std::cin>>input;
    for(int j=1;j<=input;j++)
    {
	    	std::cin>>n;
		 
		    seat_type=n%12;
		    if(n%12 == 0)
		    {
		    	seat_number=(n/12-1)*12+b[12];
			}
			else
			{
				seat_number=(n/12)*12+b[n%12];
			}
		    
			std::cout<<seat_number<<" ";
			if(n%12==0)
		    {
		    	std::cout<<"WS"<<"\n";
			}
			else
			{
				std::cout<<a[seat_type]<<"\n";
			}
	}
    
}

