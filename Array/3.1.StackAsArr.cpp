// #include <iostream>
// #include <cstdlib>
// using namespace std;

// class Stack {
//     int top;
//     int arr[50];

// public:
//     Stack() {
//         top = -1;
//     }

//     void push(int x) {
//         if (top == 49) {
//             cout << "Stack overflow" << endl;
//         } else {
//             top++;
//             arr[top] = x;
//         }
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "Stack underflow" << endl;
//         } else {
//             cout << "Popped element: " << arr[top] << endl;
//             top--;
//         }
//     }

//     void display() {
//         if (top == -1) {
//             cout << "Stack is empty" << endl;
//         } else {
//             cout << "Stack elements: ";
//             for (int i = top; i >= 0; i--) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Stack s;
//     int choice, value;

//     do {
//         cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value to push: ";
//                 cin >> value;
//                 s.push(value);
//                 break;

//             case 2:
//                 s.pop();
//                 break;

//             case 3:
//                 s.display();
//                 break;

//             case 4:
//                 exit(0);

//             default:
//                 cout << "Invalid choice" << endl;
//         }
//     } while (1);

//     return 0;
// }

//Practice 


#include<iostream>
using namespace std;

int stackarr[50];
int top = -1;

// Push operation
void push(){
    int value;
    if (top == 49){   // Correct overflow condition
        cout << "Stack Overflow\n";
    } else {
        cout << "Enter element: ";
        cin >> value;
        top++;
        stackarr[top] = value;
    }
}

// Pop operation
void pop() {
    if (top == -1){
        cout << "Stack Underflow\n";
    } else {
        cout << "Deleted element: " << stackarr[top] << endl;
        top--;
    }
}

// Peek operation
void peek(){
    if(top == -1){
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << stackarr[top] << endl;
    }
}

// Display operation
void display(){
    if(top == -1){
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements:\n";
        for(int i = top; i >= 0; i--){
            cout << stackarr[i] << endl;
        }
    }
}

// Menu-driven program
int main(){
    int choice;
    do{
        cout << "\n1. Push 2. Pop 3. Peek 4. Display 5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}