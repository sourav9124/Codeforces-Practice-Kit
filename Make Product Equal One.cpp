#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	
	vector<long long int> p;
	vector<long long int> z;
	vector<long long int> N;
	
	long long int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		
	}
	for(int i=0;i<n;i++)
	{
		if(ar[i]<0)
		{
			N.push_back(ar[i]);
		}
		if(ar[i]==0)
		{
			z.push_back(ar[i]);
		}
		if(ar[i]>0)
		{
			p.push_back(ar[i]);
		}
	}
	long long int cost=0;
	 
      for(int i=0;i<N.size();i++)
      {
      	cost+=(-1-(N[i]));
	  }
	  for(int i=0;i<p.size();i++)
	  {
	  	cost+=p[i]-1;
	  	
	  }
	  if(z.size()>0)
	  {
	  	cost+=z.size();
	  }
	  else if(N.size()%2==1)
	  {
	  	cost+=2;
	  }
	  cout<<cost<<endl;

	
}
