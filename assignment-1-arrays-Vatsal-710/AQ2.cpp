#include <iostream>
using namespace std;
void removeduplicate(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout << "Array after deletion ";
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cout << "Emter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 
    removeduplicate(arr, n);
    return 0;
}





        







