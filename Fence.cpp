#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
    int h[n];
    for(int i=0;i<n;i++)
    {
    	cin>>h[i];
	}
	int sum=0;
	int window_sum=0;
	int index=k-1;
	
	for(int i=0;i<k;i++)
	{
		sum+=h[i];
	}
	window_sum=sum;
	
	for(int j=k;j<n;j++)
	{
		window_sum=window_sum+h[j]-h[j-k];
		if(window_sum<sum)
		{
			window_sum=sum;
			index=j;
		}
	}
	cout<<(index-k+2)<<endl;
	
}
