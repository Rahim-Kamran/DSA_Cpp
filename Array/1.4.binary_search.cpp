#include <iostream>
using namespace std;
int main()
{
    int a[20], n, item;
    cout << "Enter size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int r = n - 1;
    int mid = ((l + r) / 2);
    cout << "Enter the element to be found: ";
    cin >> item;
    while (l <= r)
    {
        if (a[mid] == item)
        {
            cout << "item found: " << mid;
            break;
        }
        else if (a[mid] < item)
        {
            l = mid + 1;
            mid = (l + r) / 2;
        }
        else
        {
            r = mid - 1;
            mid = (l + r) / 2;
        }
    }
}