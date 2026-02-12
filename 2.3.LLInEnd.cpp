#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
int main(){
    node* head = NULL;
    node* tail = NULL;
    int choice = 1;
    while(choice == 1){
        node* temp = new node();
        cout<<"Enter data: ";
        cin>>temp->data;
        temp->next = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
        }else{
            tail-> next=temp;
            tail = temp;
        }
        cout<<"Countinue(1/0): ";
        cin>>choice;
    }
    node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
