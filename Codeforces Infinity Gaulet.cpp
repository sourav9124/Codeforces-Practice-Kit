#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	string ar0[6]={"Power","Time","Space","Soul","Reality","Mind"};
	string ar1[6]={"purple","green","blue","orange","red","yellow"};
	
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<6<<endl;
		
		   cout<<ar0[0]<<endl;
		   cout<<ar0[1]<<endl;
		   cout<<ar0[2]<<endl;
		   cout<<ar0[3]<<endl;
		   cout<<ar0[4]<<endl;
		   cout<<ar0[5]<<endl;	
	
	
		
	}
	else if(n>0)
	{
		
	
	
		
	
     string saved;
	bool ar[6]={false};
	string ar2[6];
	int count=0;
	for(int i=0;i<n;i++)
	{
		
		cin>>ar2[i];
		 saved=ar2[i];
		
		for(int j=0;j<6;j++)
		    {
		    	if(saved==ar1[j])
		    	{
		    		ar[j]=true;
		    		count++;
				}
			}
	}
	
	  int ans=6-count;
	  cout<<ans<<endl;
	for(int i=0;i<6;i++)
	{
		
     	 if(ar[i]==false)
     	 {
     	 	cout<<ar0[i]<<endl;
     	 }
        
         
	}
	
}
	
	
	
 
  
  
      
      
}
