#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	double total=accumulate(ar,ar+n,0);
	//cout<<total;
	
	double ans=total/n;
	
	printf("%0.12f",ans);
	
	
}

