#include <stdio.h>
#include<math.h>
int fact(int n)
{
if(n==1)
return n;
return n*fact(n-1);
}

int main ()
{
int t,n,b,r;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d" ,&b, &n, &r);
b=pow(b, fact (n));
printf("%d\n",b%r);
}
if(n%2==1)
b=n;
}
