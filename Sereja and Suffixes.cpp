#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	
	int ar[n];
	int br[m];
	set<int> st;
    int distinctElements[n];
	
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	for(int j=n-1;j>=0;j--)
{

		st.insert(ar[j]);
		distinctElements[j]=st.size();
	}
	int q;
	
	while(m-- >=1)
	{
	     cin>>q;
		 cout<<distinctElements[q-1]<<endl;	
	}
}

