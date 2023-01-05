#include <iostream>
using namespace std;
int main()
{
    int t;
    long long m;
    long long n;
    long long ans;
    scanf("%d", &t);
while(t--){
        scanf("%lld %lld", &n, &m);
        ans = (n * m ) / 2;
        printf("%lld\n",ans);
    }

}