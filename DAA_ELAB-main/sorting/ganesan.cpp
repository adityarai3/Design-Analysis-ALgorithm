#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k;
    int l, r, f, i;
    cin >> s >> k;
    r = s[0] - k[0];
    for (i = 0; i < (int)s.length(); i++)
    {
        if (r != s[i] - k[i])
            f = 1;
    }
    if (f == 1)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}