#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t;
	cin>>n>>t;
	long long int ar[n];
	long long int sum=0;
	long long int count=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
     long long int k=0;
	for(int i=0;i<n;i++)
	{
		sum+=ar[i];
		if(sum<=t)
		{
			 
			count++;
		
		}
		else
		{
			sum=sum-ar[k];
			k++;
		
		}
	
	
		

	}
	cout<<count<<endl;
	
	
}
