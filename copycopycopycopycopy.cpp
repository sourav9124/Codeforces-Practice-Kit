#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
			set<long long int> st;
		long long int n;
		cin>>n;
		long long int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			st.insert(ar[i]);
		}
	
		cout<<st.size()<<endl;
	}
}
