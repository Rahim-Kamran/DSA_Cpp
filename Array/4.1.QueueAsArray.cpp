#include<iostream>
using namespace std;

class passenger{
    public:
    int arr[10];
    int front = -1;
    int rear = -1;

    void addPassenger(int item){
        if(rear == 9){
            cout<<"Queue is full"<<endl;
        }else{
            if(front == -1){
                front = 0;
            }
            rear++;
            arr[rear] = item;
        }
    }

    void servePassenger(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"Passenger served: "<<arr[front]<<endl;
            front++;
        }
    }

    void display(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"Passengers in queue: ";
            for(int i = front; i <= rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    passenger p;
    int choice;
    do{
        cout<<"1. Add Passenger 2. Serve Passenger 3. Display Queue 4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                int item;
                cout<<"Enter the passenger ID to add: ";
                cin>>item;
                p.addPassenger(item);
                break;
            case 2:
                p.servePassenger();
                break;
            case 3:
                p.display();
                break;
            default:
                cout<<"Exiting..."<<endl;

        }
    }while(choice != 4);
}