#include <iostream>
#include<bits/stdc++.h>

using namespace std;

//lower_bound(iter1, iter2, iter3,key) [iter1, iter2) =>
//tra ve vi tri dau tien
//neu ma tat ca cac phan tu deu nho hon key thi se tra ve =>2
//upper_bound(iter1,iter2,key) [iter1,iter20 => tra ve phan tu lon hon key
int main()
{
    int i,n;
    cout<<"nhap so phan tu cua mang:";
    cin>>n;
    cout<<endl;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int x:v) cout<<x<<" ";
    cout<<endl;
    int a;
    cout<<"moi nhap so can tim:";
    cin>>a;
    cout<<"Vi tri can tim la:";
    auto it = lower_bound(v.begin(),v.end(),a);
    cout<<it-v.begin()<<endl;
    if(it == v.end()) cout<<"khong co phan tu trong mang"<<endl;

    return 0;
}
