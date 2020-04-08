#include<bits/stdc++.h>
using namespace std;
int countOne(int n)
{
	int c=0;
	while(n!=0)
	{
	   n=n&n-1;
	   c++;
		
	}
	return c;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int ar[m];
	for(int i=0;i<=m;i++)
	{
		cin>>ar[i];
	}
	int count=0;
	int res=0;
	for(int i=0;i<m;i++)
	{
		res=ar[i]^ar[m];
		
		if(countOne(res)<=k)
		{
			count++;
		}
		
	}
	cout<<count<<endl;
}

