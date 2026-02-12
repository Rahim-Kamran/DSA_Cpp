#include<iostream>
using namespace std;
struct node{
    string name;
    string phone_no;
    int duration;
    node* next;
};
int main(){
    node* head = NULL;
    node* tail = NULL;
    int choice = 1;
    while(choice==1){
        node* temp = new node();
        cout<<"Enter name: ";
        cin>>temp->name;
        cout<<"Enter phone no: ";
        cin>>temp->phone_no;
        cout<<"Enter duration: ";
        cin>>temp->duration;
        temp->next = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        cout<<"Continue (1/0): ";
        cin>>choice;
        node* ptr = head;
        while(ptr!=NULL){
            cout<<ptr->name<<" "<<ptr->phone_no<<" "<<ptr->duration<<endl;
            ptr = ptr->next;
        }
    }
}