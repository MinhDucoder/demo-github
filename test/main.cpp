#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> v;
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++) v.insert(i);
    for(auto x:v) cout<<x<<" ";
    return 0;
}
