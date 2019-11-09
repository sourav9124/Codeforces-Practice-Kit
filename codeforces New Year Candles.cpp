#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int sum=0;
	int temp=a;
	int ans=0;
	vector<int> v;
	
	while(a>=b)
	{
		temp=temp+(a/b);
	    a=a/b;
	    
		
			
	}
	//ans=accumulate(v.begin(),v.end(),0);
	 //sum=temp+ans;
	cout<<temp<<endl;
	
	//cout<<sum<<endl;
}
