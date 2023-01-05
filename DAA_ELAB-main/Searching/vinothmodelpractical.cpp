#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[n],i,c=0;
    cin>>n>>t;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        t-=a[i];
        if(t<0)
        break;
        c++;
    }
    cout<<c;
    return 0;
}
