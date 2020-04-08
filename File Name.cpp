#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
     string str;
     cin>>str;
     
	
	int count=0;
      for(int i=0;i<n-2;i++)
      {
      	
        for(int j=i+1;j<n;j++)
        {
        	if(str[i]=='x' && str[j]=='x' && str[j+1]=='x')
        	{
        		
        		
        		count++;
			}
			break;
		}
	  }
	  cout<<count<<endl;
}
