//#include<iostream>
//using namespace std;
//int main()
//{
//	int test_cases;
//	int number,k_thres;
//	int on_time=0;
//	std::cin>>test_cases;
//	while(test_cases--)
//	{
//		std::cin>>number;
//		std::cin>>k_thres;
//		array_2[number];
//		int ar[number];
//		for(int i=0;i<number;i++)
//		{
//			std::cin>>ar[i]; // 0,2,3,4,5-2,-2
//		}
//		for(int i=0;i<number;i++)	
//		{
//			
//			if(ar[i]<=0)
//			{
//			++on_time;
//			}
//		if(on_time>=k_thres)
//					{
//						array_2[i]="YES";
//					}
//					else
//					{
//						array_2[i]="NO";
//					}	
//		}
//	}
//	for(int j=0;j<number;j++)
//	{
//		std::cout<<array_2[j]<<"\n";
//	}
//}	

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void count_fr(int n)
{
	map<int,int> mp;
	vector<int> v;

	while(n!=0)
	{
		int a;
		cin>>a;
		mp[a]++;

		n--;
	}

	map<int,int>::iterator it;

	for(it=mp.begin();it!=mp.end();it++)
	{

		cout<<it->first<<" : "<<it->second<<endl;
	}
}
int main()
{
	int n;
	int m;
	cout<<"enter n"<<endl;
	cin>>n;
	//cout<<"enter m"<<endl;

	//cin>>m;
	count_fr(n);
	//count_fr(m);


}

