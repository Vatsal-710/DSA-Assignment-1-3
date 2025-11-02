#include <iostream>
using namespace std;
 int main(){
    int a,b,c,d;
    cout <<"Enter rows for fist matrix ";
    cin >> a;
    cout <<"Enter column for fist matrix ";
    cin >> b;
    cout <<"Enter rows for second matrix ";
    cin >> c;
    cout <<"Enter column for second matrix ";
    cin >> d;
    int arr[a][b];
    int brr[c][d];

    cout << "Enter first matrix: ";
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    cout << "Enter second matrix: ";
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            cin>>brr[i][j];
        }
    }
    int crr[a][d];

    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
            crr[i][j] = 0;
            for(int k=0; k<b; k++){
                crr[i][j] += arr[i][k]*brr[k][j];

            }
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
            cout << crr[i][j] << " ";
        }
    cout << endl;
    }


 }