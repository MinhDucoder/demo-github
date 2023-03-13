#include<bits/stdc++.h>

using namespace std;

int main()
{
	map<int,int> mp;
	int i,n;
	for(i=0;i<n;i++)
	{
		int x;cin>>x;
		mp[x]++;
	}
	int res=0,fre=0;
	for(auto x:mp)
	{
		if(x.second>res)
		{
		  res=x.second;
		  fre=x.first;
		}
	}
	cout<<fre;
}
