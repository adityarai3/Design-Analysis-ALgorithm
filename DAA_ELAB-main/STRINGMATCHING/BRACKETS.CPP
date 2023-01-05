#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c = 0;
    string b;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> b;
        if (b[0] == '(')
        {
            for (int i = 2; i < n; i += 1)
            {
                if (b[i] == ')')
                    c++;
            }
        }
        else
            for (int i = 2; i < n; i += 1)
            {
                if (b[i] == '(')
                    c++;
            }
    }
    cout<<c;

    return 0;
}