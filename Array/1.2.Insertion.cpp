#include <iostream>
using namespace std;
int main()
{
    int a[20], size, num;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter the Elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "The Elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the number to be inserted: ";
    cin >> num;
    // Insertion at beginning
    /*for (int i = size - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = num;
    size++;
    cout << "The Elements of the array after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }*/

    // Insertion at any position
    /*int pos;
    cout << "Enter the position: ";
    cin >> pos;
    for (int i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;

    cout << "The Elements of the array after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }*/

    // Insertion at end of array
    for (int i = 0; i < size; i++)
    {
        a[size] = num;
    }
    size++;

    cout << "The Elements of the array after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}