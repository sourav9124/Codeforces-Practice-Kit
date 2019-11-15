#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10]={0};
    for(int i=1;i<=6;i++)
    {
    	int x;
    	cin>>x;
    	
    	ar[x]++;
	}
	
	int leg=0;
	int leg_value=0;
	for(int i=1;i<=9;i++)
	{
		if(ar[i]>=4)
		{
			leg=1;
			leg_value=i;
			ar[i]=ar[i]-4;
			break;
		}
	}
	
	int body=0;
	int body_value=0;
	for(int i=1;i<=9;i++)
	{
		if(ar[i]>=1)
		{
			body=1;
			body_value=i;
			ar[i]=ar[i]-1;
			break;
		}
	}
	
	int head=0;
	int head_value=0;
	for(int i=1;i<=9;i++)
	{
		if(ar[i]>=1)
		{
			head=1;
			head_value=i;
			ar[i]=ar[i]-1;
			break;
		}
	}
	
	if(leg==1 && head==1 && body==1)
	{
		 //for bear
		 
		 if(head_value!=body_value && leg_value!=head_value && leg_value!=body_value)
		 {
		 	cout<<"Bear"<<endl;
		 }
		 else if(head_value!=body_value && (leg_value!=head_value || leg_value!=body_value))
		 {
		 	cout<<"Bear"<<endl;
		 	
		 }
		 else if(leg_value!=head_value && leg_value!=body_value && head_value==body_value)
		 {
		 	cout<<"Elephant"<<endl;
		 }
		 else if(leg_value==head_value && leg_value==body_value && head_value==body_value)
		 {
		 	cout<<"Elephant"<<endl;
		 }
	}
	else
	{
		cout<<"Alien"<<endl;
	}
	
}
