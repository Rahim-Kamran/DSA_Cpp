#include<iostream>
using namespace std;
int main(){
    struct node
    {
        int Rollno;
        string name;
        int marks;
        struct node* link;
    };
    struct node *temp , *head;
    head = NULL;
    int choice = 1;
    cout<<"Inserting at the starting of list: "<<endl;
    while(choice == 1)
    {
        temp = new node();
        cout<<"Enter Rollno: ";
        cin>>temp->Rollno;
        cout<<"Enter name: ";
        cin>>temp->name;
        cout<<"Enter marks: ";
        cin>>temp->marks;
        temp->link=head;
        head = temp;
        cout<<"Countinue 0/1: ";
        cin>>choice;
    }
    temp = head;
    cout<<"The linked list is: "<<endl;
    while(temp != NULL){
        cout<<"Rollno: "<<temp->Rollno<<endl;
        cout<<"Name: "<<temp->name<<endl;
        cout<<"Marks: "<<temp->marks<<endl<<endl;
        temp = temp->link;
    }
    return 0;
}