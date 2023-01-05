#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, F, K, X;
    float Fn, Kn, Xn;
    cin >> a >> F >> b >> K >> c >> X;
    if (F == "?")
    {
        Kn = stof(K);
        Xn = stof(X);
        Fn = -1 * Kn * Xn;
        printf("F %.2f", Fn);
    }
    if (K == "?")
    {
        Fn = stof(F);
        Xn = stof(X);
        Kn = -1 * (Fn / Xn);
        printf("K %.2f", Kn);
    }
    if (X == "?")
    {
        Kn = stof(K);
        Fn = stof(F);
        Xn = -1 * (Fn / Kn);
        printf("X %.2f", Xn);
    }
    return 0;
}