#include <iostream>
using namespace std;

const int MAX=50;
int arr[MAX];
int size=0;

void create(){
    cout << "Enter array sizel: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for(int i=0; i<size; i++)
    cin >> arr[i];
}

void display() { 
    cout << "Array: "; 
    for(int i = 0; i < size; i++) cout << arr[i] << " "; 
    cout << endl; 
}

void insert() { 
    int pos, val; 
    cout << "Enter position and value to insert: "; 
    cin >> pos >> val; 
    for(int i = size; i > pos; i--) arr[i] = arr[i-1]; 
    arr[pos] = val; 
    size++;
}
 void del(){
    int pos;\
    cout << "Enter position to delete: ";
    cin >> pos;
    for(int i=pos; i<size-1; i++)
    arr[i]=arr[i+1];
    size--;
 }

 void search() { 
    int val, found = 0; 
    cout << "Enter value to search: "; 
    cin >> val; 
    for(int i = 0; i < size; i++) { 
        if(arr[i] == val) { 
            cout << "Found at position " << i << endl; 
            found = 1; 
        } 
    } 
    if(!found) cout << "Not found\n"; 
} 
int main() { 
    int choice; 
    while(true) { 
        cout << "\n1. Create\n2. Display\n3. Insert\n4. Delete\n5. Search\n6. Exit\n"; 
        cout << "Enter choice: "; 
        cin >> choice; 
         
        switch(choice) { 
            case 1: create(); break; 
            case 2: display(); break; 
            case 3: insert(); break; 
            case 4: del(); break; 
            case 5: search(); break; 
            case 6: return 0; 
            default: cout << "Invalid choice\n"; 
        } 
    } 
} 
