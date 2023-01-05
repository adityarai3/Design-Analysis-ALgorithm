#include <iostream>
using namespace std;
int main()
{
    int n, a[n], k, f = 0, i;
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "Enter array elements\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element you want to search for\n";
    cin >> k;
    for (i = 0; i < n; i++)
        if (a[i] == k)
        {
            f = 1;
            break;
        }
    if (f == 1)
        cout << "Element found at index " << i << endl;
    else
        cout << "Element not available in the array\n";
    return 0;
}