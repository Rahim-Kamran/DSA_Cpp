#include <iostream>
using namespace std;
int main()
{
    int a[20], n, it;
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number you want to found: ";
    cin >> it;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == it)
        {
            cout << "Elements are: " << i;
        }
    }
}
//add two numbers
