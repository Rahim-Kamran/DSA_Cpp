#include<iostream>
using namespace std;
int main(){
    struct node
    {
        int data;
        struct node* link;
    };
    struct node *temp, *head, *tail;
    head = NULL;
    tail = NULL;
    int choice = 1;
    cout<<"Inserting at the end of list"<<endl;
    while(choice == 1)
    {
        temp = new node();
        cout<<"Enter data: ";
        cin>>temp->data;
        temp->link = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->link = temp;
            tail = temp;
        }
        cout<<"Continue 0/1: ";
        cin>>choice;
    }
    temp = head;
    cout<<"The linked list is: "<<endl;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;

    }
    return 0;


}