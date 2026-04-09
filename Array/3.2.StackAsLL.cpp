#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* top = NULL, *newNode, *temp;

void push(){
    newNode = new node();
    cout<<"Enter value to push: ";
    cin>>newNode->data;
    newNode->next = top;
    top = newNode;
} 

void pop(){
    if(top == NULL){
        cout<<"Stack Underflow"<<endl;
    }else{
        cout<<"Popped Element: "<<top->data<<endl;
        temp = top;
        top = top->next;
        delete temp;
    }
}

void peek(){
    if(top == NULL){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Top element: "<<top->data<<endl;
    }
}

void display(){
    if(top == NULL){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack Elements: ";
        temp = top;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;

        }

        cout<<endl;
    }
}

int main(){
    int choice;
    do{
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            case 5: cout<<"Exiting..."<<endl;
            break;
            default: cout<<"Invalid choice, please try again."<<endl;
        }
    }while(choice != 5);
}