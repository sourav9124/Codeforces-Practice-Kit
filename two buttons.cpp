#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	
	cin>>n>>m;
	int ans = 0;
	
	int count=0;
	
	if(n<m)
	{
		while(m>n)
		{
		   if(m%2==0)
		   {
		   	  m=m/2;
		   	  count++;
		   	  
		   }
		   else if(m%2==1)
		   {
		   	  m=m+1;
		   	  count++;
		   }
			
			
			 
			 
		    
		}
		   int res=n-m;
		   cout<<res+count<<endl;
	}
	else
     {
     	ans=n-m;
     	cout<<ans<<endl;
	 }
}
