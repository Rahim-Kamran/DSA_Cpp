#include<iostream>
using namespace std;

int main(){
    struct node{
        int data;
        node* link;
    };

    node *temp, *head, *ptr;
    head = NULL;

    int choice = 1;
    cout<<"Inserting at the end of list\n";

    while(choice == 1){
        temp = new node();
        cout<<"Enter data: ";
        cin>>temp->data;
        temp->link = NULL;

        if(head == NULL){
            head = temp;   // first node
        }
        else{
            ptr = head;
            while(ptr->link != NULL){
                ptr = ptr->link;
            }
            ptr->link = temp;   // attach at end
        }

        cout<<"Continue 0/1: ";
        cin>>choice;
    }

    // Display
    ptr = head;
    cout<<"\nLinked List: ";
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }

    return 0;
}
