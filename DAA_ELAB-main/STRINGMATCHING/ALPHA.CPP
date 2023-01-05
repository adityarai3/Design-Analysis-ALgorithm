// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     int a[100],r,k,i=0;
//     for(int j=0;j<s.length();j=i+1)
//     {
//         while(s[i]!=','){   
//         cout<<s[i]<<"------------11";
//             r=0;
//         r=(int)(s[i])+r*10;
//         cout<<r;
//         i++;
//         }
//         a[k++]=r;
//     }
//     int l=sizeof(a)/sizeof(a[0]);
//     sort(a,a+l);
//     for(i=0;i<l;i++)
//     cout<<a[i]<<",";
// }





#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,r=0,j=0,l,a[100],c=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==',')
        {
            a[j]=r;
            r=0;
            c++;
            j++;
        continue;
         }
        r=(s[i]-48)+r*10;
    }
    a[j]=r;
    l=c+1;
    sort(a,a+l);
    for(i=0;i<l-1;i++)
    cout<<a[i]<<",";
    cout<<a[i];
    return 0;
}