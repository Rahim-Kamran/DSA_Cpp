#include<iostream>
using namespace std;

int id[50];
int n = 0;

void insertPatient(int pid) {
    n++;
    int ptr = n;
    int par;

    while (ptr > 1) {
        par = ptr / 2;
        if (id[par] >= pid) {
            break;
        }
        id[ptr] = id[par];
        ptr = par;
    }
    id[ptr] = pid;
}

// Fix 1: Added missing peek() function
int peek() {
    if (n == 0) {
        cout << "Heap is empty\n";
        return -1;
    }
    return id[1]; // Root is always the max
}

// Fix 2: Added missing deleteHeap() function
void deleteHeap(int* item) {
    if (n == 0) {
        cout << "Heap is empty\n";
        *item = -1;
        return;
    }

    *item = id[1];       // Save root (max element)
    id[1] = id[n];       // Move last element to root
    n--;                 // Reduce heap size

   
    int ptr = 1;
    while (true) {
        int left  = 2 * ptr;
        int right = 2 * ptr + 1;
        int largest = ptr;

        if (left <= n && id[left] > id[largest])
            largest = left;
        if (right <= n && id[right] > id[largest])
            largest = right;

        if (largest == ptr) break;

        swap(id[ptr], id[largest]);
        ptr = largest;
    }
}

void display() {
    if (n == 0) {
        cout << "No patient\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        cout << id[i] << " ";
    }
    cout << "\n";
}

int main() {
    int choice, pid, item;
    do {
        cout << "\n1. Insert Patient\n2. Deletion\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter patient ID: ";
                cin >> pid;
                insertPatient(pid);
                break;
            case 2:
                deleteHeap(&item);
                if (item != -1)
                    cout << "Deleted patient ID: " << item << "\n";
                break;
            case 3:
                if (peek() != -1)
                    cout << "Highest priority patient ID: " << peek() << "\n";
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5); 
}