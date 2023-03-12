#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool timkiem(int a[],int n,int b)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
            return true;
    }
         return false;
}

bool bs(int a[],int n,int b)
{
    int i;
    int left=0,right=n-1;
    while(left<=right)
    {
        int m=right-left;
        if(a[m]==b) return true;
        else if(a[m]>b) right=m-1;
        else  left=m+1;
    }
    return false;
}

bool binary_search(int a[],int n,int b)
{
    int left = 0,right = n-1;
    if (left > right) return false ;
    int m=(right - left)/2;
    if(a[m]==b)
        return true;
    else if (a[m]>b)
        return binary_search(a,m-1,b) ;
    else
        return binary_search(a,m+1,b) ;
}

int main()
{
    int i,n,b;
    cin>>n>>b;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int x:a) cout<<x<<" ";
    if(timkiem( a , n , b))
        cout<<"Found!"<<endl;
    else cout<<"Not Found!"<<endl;
    if(bs( a, n, b))
        cout<<"Found!"<<endl;
    else cout<<"Not Found!"<<endl;
    if(binary_search(a,n,b))
        cout<<"Found!"<<endl;
    else cout<<"Not Found!"<<endl;
    return 0;
}
