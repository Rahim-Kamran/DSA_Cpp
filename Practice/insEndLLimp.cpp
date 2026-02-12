#include<iostream>
using namespace std;
    struct node{
        int data;
        node* next;
    };
int main() {
    node* head = NULL;
    node* tail = NULL;
    int choice = 1;

    while (choice == 1) {
        node* temp = new node();

        cout << "Enter data: ";
        cin >> temp->data;
        temp->next = NULL;

        if (head == NULL) {        // first node
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;    // add at end
            tail = temp;
        }

        cout << "Continue (1/0): ";
        cin >> choice;
    }

    // Display
    node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
