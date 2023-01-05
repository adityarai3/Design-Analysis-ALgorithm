#include <iostream>
using namespace std;
int a[9999];
int binarysearch(int k, int arr[], int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == k)
            return mid;
        if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void sort(int a[], int n)
{
    int i, j, flag;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                flag = a[i];
                a[i] = a[j];
                a[j] = flag;
            }
        }
    }
    cout << "Sorted Array - ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int n, i, k;
    cout << "Enter the size of the array\n";
    cin >> n;
    int a[n];
    cout << "Enter array elements\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element you want to search for\n";
    cin >> k;
    sort(a, n);
    int r = binarysearch(k, a, 0, n);
    if (r == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << r << endl;
    return 0;
}