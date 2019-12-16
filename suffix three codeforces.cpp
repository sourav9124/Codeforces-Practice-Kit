#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		
		if(s[n-2]=='p'&&s[n-1]=='o')
		{
			cout<<"FILIPINO"<<endl;
		}
		if(s[n-4]=='d'&&s[n-3]=='e'&&s[n-2]=='s'&&s[n-1]=='u' ||
		   s[n-4]=='m'&&s[n-3]=='a'&&s[n-2]=='s'&&s[n-1]=='u')
		{
		   	cout<<"JAPANESE"<<endl;
		}
		   
		if(s[n-5]=='m'&&s[n-4]=='n'&&s[n-3]=='i'&&s[n-2]=='d'&&s[n-1]=='a')
		{
		   	cout<<"KOREAN"<<endl;
		}
		
		
		    
		   
	}
}
