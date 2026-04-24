//Store integer keys in a hash table of size N using hash function h(k) = k mod N. if a collision occurs, resolve it using linear probing by checking the next available slot. 
//insert given keys into the hash accordingly.
//finally, display the hash with index and values (or "Empty" for unoccupied slots).
#include <iostream>
using namespace std;
const int N = 10;
int hashTable[N];
void insert(int key){
    int index = key % N;
    //Linear probing to resolve collision
    while(hashTable[index] != 0){
        index = (index + 1) % N; 
    }
    hashTable[index] = key;
}
int main(){
    for(int i=0; i<N; i++){
        hashTable[i] = 0; 
    }
    insert(15);
    insert(25);
    insert(35);
    insert(5);
    insert(10);
    cout<<"Hash Table: "<<endl;
    for(int i=0; i<N; i++){
        if(hashTable[i] != 0){
            cout<<"Index "<<i<<": "<<hashTable[i]<<endl;
        } else {
            cout<<"Index "<<i<<": Empty"<<endl;
        }
    }
    return 0;
}

// //Quatric probing
// #include <iostream>
// using namespace std;
// const int N = 10;
// int hashTable[N];
// void insert(int key){
//     int index = key % N;
//     int i = 0;
//     //Quadratic probing to resolve collision
//     while(hashTable[index] != 0){
//         i++;
//         index = (key + i*i) % N; 
//     }
//     hashTable[index] = key;
// }
// int main(){
//     for(int i=0; i<N; i++){
//         hashTable[i] = 0; 
//     }
//     insert(15);
//     insert(25);
//     insert(35);
//     insert(5);
//     insert(10);
//     cout<<"Hash Table: "<<endl;
//     for(int i=0; i<N; i++){
//         if(hashTable[i] != 0){
//             cout<<"Index "<<i<<": "<<hashTable[i]<<endl;
//         } else {
//             cout<<"Index "<<i<<": Empty"<<endl;
//         }
//     }
//     return 0;
// }