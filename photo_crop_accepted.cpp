#include<iostream>
int main()
{
    int l,w,h,n;
    std::cin>>l;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cin>>w>>h; 
        if(w<l || h<l)	
        std::cout<<"UPLOAD ANOTHER \n";
        else 
        if(w>=l && h>=l)
        {
            if(l==w)
                {
                    std::cout<<"ACCEPTED \n";
                }
            else
                {
                    std::cout<<"CROP IT \n";
                }
        }
    }
}



