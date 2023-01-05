#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    int b[n],g[n];
    for(int i = 0;i<n;i++)
    cin>>b[i];
    for(int i = 0;i<n;i++)
    cin>>g[i];
    while(t--)
    {
        int c=0;
    for(int i = 0;i<n;i++)
    {
        if(b[i]%g[i]==0||g[i]%b[i]==0)
        c++;
    }
    cout<<c<<endl;
    }
    return 0;
}