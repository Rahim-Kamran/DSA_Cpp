#include <iostream>
#include <climits>
using namespace std;
//input and output of array
/*int main(){
    int a[10],n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Elements are: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
}
    //input and output of array
int main()
{
    int a[10], n, i;
    cout << "Enter the size of array: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Elemets are: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
    //input and output of array
int main()
{
    int a[20], n, i;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the values of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The elemts are: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}*/
//input and output of array
// int main()
//     {
//         // int size = 5;
//         int marks[5];
//         int size = 5;
//         // cout<< sizeof(marks) / sizeof(int)<<endl;
       
//         for(int i =0;i<size;i++){
//             cin>>marks[i];
//         }
//         cout<<"The marks are: ";
//         for(int i=0;i<size;i++){
//             cout<<marks[i]<<" ";
//         }


//     }

//find the smallest number in an array
// int main()
// {
//     int n[10];
//     int smallest = INT_MAX;
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     cout << "Enter the elements of array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> n[i];
//         if (n[i] < smallest)
//         {
//             smallest = n[i];
//         }
//     }
//     cout << "Smallest element is: " << smallest << endl;
// }
//find the largest number in an array
int main()
{
    int n[10];
    int largets = INT_MAX;
    int size;
    // cout<<"Enter the size of array: ";
    // cin>>size;
    // cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        //Shortest way to take input
        // cin>>n[i];
        // if(n[i]>largets){
        //     largets=n[i]; 
        largets = min(largets, n[i]);
        cin>>n[i];
        }
// }
    cout<<"Largest element is: "<<largets<<endl;
}
