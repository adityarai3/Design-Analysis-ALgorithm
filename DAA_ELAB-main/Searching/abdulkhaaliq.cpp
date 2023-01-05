#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j=0;
    cin>>t;
    while(t--)
    {
        int s=0,cp=0,cn=0;
        ++j;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            cp++;
            cn++;
            s=abs(a[i])+s;
        }
        if(cp==0)
        cout<<"Line "<<j<<": inf";
        else
        {
         if((s%2==0) &&(n%2==0)){
            s=s/2;    
            n=n/2; }   
        printf("Line %d: %d/%d",j,s,cp);
        }
        cout<<endl;
    }
}

// 5
// 2
// 1 5
// 3
// 8 -3 -1
// 3
// 3 -6 -9
// 4
// 1 2 3 4
// 2
// -6 -3