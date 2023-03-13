#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//sort sap xep tang dan
//sort(a,a+n,geater<int> v : giam dan
//sort(v.begin(),v.end(),geater<int> v;
//stable_sort:bubble, insertion sort, merge sort
//sap xep cac tu theo thu tu chieu dai giam neu == thi
//xep theo tu ddien
bool cmp(int a,int b)
{
    return a>b;
}

bool cmpp(int a,int b)
{
    return abs(a)<abs(b);
}

bool cmppp(string a,string b)
{
    if(a.length()!=b.length())
        return a.length()<b.length();
    else return a<b;
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    vector<int> v;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    //sap xep be den lon
    for(int x:a) cout<<x<<" ";
    cout<<endl;
    //sap xep tu giam dan cach 1
    for(i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
    //giam dan cach2
    sort(v.begin(),v.end(),cmp);
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
    //sap xep theo tri tuyet doi tang dan
    sort(v.begin(),v.end(),cmpp);
    for(auto x:v) cout<<x<<" ";
    //theo tinh on dinh vi tri
    stable_sort(v.begin(),v.end(),cmpp);
    for(int x:v) cout<<x<<" ";
    cout<<endl;
    cin.ignore();
    //sap xep cac tu theo thu tu chieu dai giam neu == thi
    //xep theo tu ddien
    vector<string> p;
    for(i=0;i<n;i++)
    {
        cin.ignore();
        string x;
        p.push_back(x);
    }
    sort(p.begin(),p.end(),cmppp);
    for(auto x:p) cout<<x<<" ";
    cout<<endl;
    return 0;
}
