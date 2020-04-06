#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long ar[n];
	for(int i=0;i<n;i++)
	{
	   cin>>ar[i];  	
	}
	long long int dis=0;
	sort(ar,ar+n);
	long long int wait=ar[0];
	
	for(int i=1;i<n;i++)
	{
		if(wait>ar[i])
		{
			dis++;
		}
		else
		{
			wait=wait+ar[i];
		}
	}
	cout<<(n-dis)<<endl;
}
