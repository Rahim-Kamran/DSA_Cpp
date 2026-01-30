#include<iostream>
using namespace std;
int main(){
    struct node
    {
        int data;
        struct node* link;
    };
    struct node *temp, *head;
    head = NULL;
    int choice = 1;
    cout<<"Inserting at the starting of list"<<endl;
    while(choice == 1)
    {
        temp = new node();
        cout<<"Enter data: ";
        cin>>temp->data;
        temp->link=head;
        head = temp;
        cout<<"Continue 0/1: ";
        cin>>choice;
    }
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    return 0;
    
};