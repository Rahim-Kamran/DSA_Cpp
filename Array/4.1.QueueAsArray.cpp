#include<iostream>
using namespace std;
class passenger{
    public:
    int arr[10];
    int front = -1;
    int rear = -1;

    void addPassenger(int x){
        if(rear == 9){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear] = x;
        }
    }
    void servePassenger(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            front++;
            cout<<"Passenger "<<arr[front]<<" is served"<<endl;
        }
    }   
    void displayQueue(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Passengers in queue: ";
            for(int i = front+1; i <= rear; i++){
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
        cout<<"1. Add Passenger"<<endl;
        cout<<"2. Serve Passenger"<<endl;
        cout<<"3. Display Queue"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                int x;
                cout<<"Enter passenger number: ";
                cin>>x;
                p.addPassenger(x);
                break;
            case 2:
                p.servePassenger();
                break;
            case 3:
                p.displayQueue();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }}while(choice != 4);
        return 0;
}