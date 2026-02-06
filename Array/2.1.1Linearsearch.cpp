//Insertion in begninig of linked list
#include<iostream>
using namespace std;
int main(){
    struct node{
        int Roll_no;
        string name;
        int marks;
        struct node* link;
    };
    struct node *temp, *head;
    head =NULL;
    int choice = 1;
    cout<<"Inserting at the starting of list: "<<endl;
    while(choice == 1){
        temp = new node();
        cout<<"Enter Roll_no: ";
        cin>>temp->Roll_no;
        cout<<"Enter name: ";
        cin>>temp->name;
        cout<<"Enter marks: ";
        cin>>temp->marks;
        //Insertion at the beginning of linked list
        // temp->link = head;
        // head = temp;
        //Insertion at the end of linked list
        temp->link = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            struct node* temp1 = head;
            while(temp1->link != NULL){
                temp1 = temp1->link;
            }
            temp1->link = temp;
        }
        cout<<"Continue 0/1: ";
        cin>>choice;
    }
    temp = head;
    cout<<"The linked list is: "<<endl;
    while(temp != NULL){
        cout<<"Roll_no: "<<temp->Roll_no<<" Name: "<<temp->name<<" Marks: "<<temp->marks<<endl;
        temp = temp->link;
    }
}