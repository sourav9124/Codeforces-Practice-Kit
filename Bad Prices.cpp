#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int min1=ar[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(ar[i]>min1)
			{
				count++;
				
			}
			
				min1=min(ar[i],min1);
			
		}
		cout<<count<<endl;
	}
}
