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
    head = NULL;
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
        //insertion at the last of linked list
        temp->link = NULL;
        while(temp->link != NULL){
            temp =temp->link;
            
        }
        temp->link = head;
        head = temp;
        cout<<"Continue 0/1: ";
        cin>>choice;

    }
    //deletion at the beginning of linked list
    if(head == NULL){
        cout<<"List is empty!"<<endl;
    }
    else{
        temp = head;
        head = head->link;
        delete temp;
    }
    //deletion at the perticular position of linked list
    int pos;
    cout<<"Enter position to delete: ";
    cin>>pos;
    if(head == NULL){
        cout<<"List is empty!"<<endl;
    }
    else if(pos == 1){
        temp = head;
        head = head->link;
        delete temp;
    }
    else{
        struct node* temp1 = head;
        for(int i=1;i<pos-1;i++){
            temp1 = temp1->link;
            if(temp1 == NULL){
                cout<<"Position out of range!"<<endl;
                return 0;
            }
        }
        struct node* temp2 = temp1->link;
        if(temp2 == NULL){
            cout<<"Position out of range!"<<endl;
            return 0;
        }
        temp1->link = temp2->link;
        delete temp2;

    }
    
}