#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int d1,d2,d3;
	int check=1;
	
	
	cin>>d1>>d2>>d3;
	long long int ar[3];
	ar[0]=d1;
	ar[1]=d2;
	ar[2]=d3;
	long long int sum=0;
	
	long long int ans_final=ar[0]+ar[1]+ar[2];
	
	
	
	if(ar[0]==ar[1] && ar[1]==ar[2] && ar[0]==ar[2])
	{
	    long long int ans=ar[0]*3;
	    cout<<ans<<endl;
		
	}
	

	else 
	{
		sort(ar,ar+3);
		
	
	
	 long long int ans1=ar[0]*2;
	 long long int ans2=ar[1]*2;
	 
	   sum=ans1+ans2;
	   
	    long long int mx=min(sum,ans_final);
        cout<<mx<<endl;
	   

	
    }
    
    

     
}
