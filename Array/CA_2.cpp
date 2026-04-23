// you are developing a patient triage system for a busy ER. patients arrive with urgency scores (integrars form 1-10) implemet a max-heap to efficintly insert new patients into the priority queue. the heap must satisfy the proprty where each parent node has a higher score than its children.
//task 1: insert each new patient following the standard heap insertion algorithm: 
//2.add at the end then bubble up via paresnt swape if needed. 
//3.demostarte with array indices after each insertion. 
//4.output the final heap array and verify the root holds the highest scoree.
#include <iostream>
using namespace std;
int heap[100];
int size = 0;
void insert(int value){
    size++;
    heap[size] = value;
    int i = size;
    while(i > 1 && heap[i] > heap[i / 2]){
        swap(heap[i], heap[i / 2]);
        i=i / 2;}
    for(int j=1; j<=size; j++){
        cout<<heap[j]<< " ";}
    cout<<endl;}
int main(){
    insert(5);
    insert(3);
    insert(8);
    insert(1);
    insert(9);
    cout<<"Final Heap: ";
    for(int i=1; i <= size; i++){
        cout<<heap[i] << " ";}
    cout<<"Root: "<<heap[1];
    return 0;
}