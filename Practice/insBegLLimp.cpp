#include<iostream>
using namespace std;
int main(){
    struct node{
        int data;
        struct node* link;
    };
    node* head = NULL;
    int choice = 1;
    while(choice == 1){
        node* temp = new node();
        cout<<"Enter the data: ";
        cin>>temp->data;
        temp->link = head;
        head = temp;

        cout<<"Cotinue(1/0): ";
        cin>>choice;

    }
    node* ptr =head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->link;
        
    }

}