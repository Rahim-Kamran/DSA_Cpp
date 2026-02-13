#include <iostream>
#include <cstdlib>
using namespace std;

class Stack {
    int top;
    int arr[50];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 49) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice" << endl;
        }
    } while (1);

    return 0;
}
