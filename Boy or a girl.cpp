#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	
	set<int> st;
	for(int i=0;i<str.length();i++)
	{
		st.insert(str[i]);
		
		
	}
	int res=st.size();
	if(res%2==1)
	{
		cout<<"IGNORE HIM!"<<endl;
		return 0;
	}
	cout<<"CHAT WITH HER!"<<endl;
	
	
}
