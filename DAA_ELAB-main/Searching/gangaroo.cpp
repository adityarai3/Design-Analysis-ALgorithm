#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,t,i,j,c=0;
    cin>>a>>b>>s>>t;
    for(i=a;i<=a+s;i++)
    {
        for(j=b;j<=b+s;j++)
        {
            if(i+j<=t)
            c++;
        }
    }
    cout<<c;
    return 0;
    printf("if(s>=t)if(s<=t/2)");
}