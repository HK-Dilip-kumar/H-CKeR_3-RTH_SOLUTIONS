#include<iostream>
int main()
{
int c=0,i,p;
std::cin>>p;
 for(int i=1;i<=p;i++)
 {	
     int j=1;
     int p=i;
     while(j<=p)
     {
         if(p%j==0)
         {
		 c++;
		 }
         j++;
         std::cout<<"value of c is"<<c;
		 if(c==2)
         std::cout<<j<<" ";
     }
  }
}
















