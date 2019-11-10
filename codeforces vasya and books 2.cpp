#include<bits/stdc++.h>
//#define ll long long;
using namespace std;
int main()
{
      long long int n; cin>>n;
      long long int ar[13];
	  
	  for(int i=1;i<13;i++)
	  {
	      ar[i]=pow(10,i)-1;
		    	
	  }	
	  for(int i=2;i<13;i++)
	  {
	  	for(int j=1;j<=i-1;j++)
	  	{
	  		ar[i]=ar[i]-ar[j];
		  }
	  }
	  long long int count=0;
	  for(int i=1;i<13;i++)
	  {
	  	if(n-ar[i]>=0)
	  	{
	  		count+=ar[i]*i;
	  		n=n-ar[i];
		}
		else
		{
			count+=n*i;
			break;
		}
		  
		  
	  }
	  cout<<count<<endl;
}
