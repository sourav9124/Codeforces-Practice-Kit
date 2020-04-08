#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	vector<int> v;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		
	}
	sort(ar,ar+n);
	for(int i=0;i<n;i=i+2)
	{
		int res;
		res=(ar[i+1]-ar[i]);
		v.push_back(res);
		
	}
	

	
	int ans=accumulate(v.begin(),v.end(),0);
	
	cout<<ans<<endl;
	
	
	
	
}
