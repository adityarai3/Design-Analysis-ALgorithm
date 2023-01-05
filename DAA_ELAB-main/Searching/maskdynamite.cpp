#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    double s,tm;
    string b;
    for(int i =1;i<=1;i++)
    cin>>n>>b>>l;
    int l1=b.size();
    if(l1==1)
    s=b[0]-48;
    else
    s=(float)(b[0]-48)/(b[2]-48);
    // cout<<s<<endl;
    tm=n*s*.45*7.5;
    if(tm<l)
    printf("%.2f the Mask can eat it!",tm);
    else
    printf("%.2f the Mask should not eat it!",tm);
    
    return 0;
}