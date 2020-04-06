#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	
	long long int ar[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	for(int i=0;i<n-2;i++)
	{
		if((ar[i]+ar[i+1])>ar[i+2])
		{
			cout<<"YES"<<endl;
			return 0;
		}
		
	}
	cout<<"NO"<<endl;
	
}
