#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, min = 99999, r;
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++)
        cin >> ar[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            r = ar[i] - ar[j];
            if (r > 0 && r < min)
                min = r;
        }
    }
    cout << min;
    return 0;
}