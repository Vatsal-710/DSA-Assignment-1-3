#include <iostream> 
using namespace std; 
 
int main() 
{ 
    int a, b; 
    cout << "Enter rows: "; 
    cin >> a; 
    cout << "Enter columns: "; 
    cin >> b; 
    int arr[a][b]; 
    cout << "Enter elements of matrix " << endl;
    for (int i = 0; i < a; i++) 
    { 
        for (int j = 0; j < b; j++) 
        { 
            cin >> arr[i][j]; 
        } 
    } 
 
    for (int i = 0; i < b; i++) 
    { 
        for (int j = 0; j < a; j++) 
        { 
            cout << arr[j][i] << " "; 
        } 
        cout << endl;
    }
}