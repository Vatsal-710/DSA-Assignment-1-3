#include<iostream> 
using namespace std; 
int main(){ 
    int a,b; 
    cout<<":Enter the rows: "; 
    cin>>a; 
    cout<<"Enter the columns: "; 
    cin>>b; 
    int arr[a][b]; 
    for(int i=0;i<a;i++){ 
        for(int j=0;j<b;j++){ 
            cin>>arr[i][j]; 
        } 
    } 
int row_add; 
    for(int i=0;i<a;i++){ 
         int row_add = 0; 
        for(int j=0;j<b;j++){ 
          
            row_add+= arr[i][j]; 
 
        } 
        cout<<"Row"<<i+1<<" = "<<row_add<<endl; 
    } 
 
    int col_add; 
      for(int i=0;i<a;i++){ 
         int col_add = 0; 
        for(int j=0;j<b;j++){ 
          
            col_add+= arr[j][i]; 
 
        } 
        cout<<"Column"<<i+1<<" = "<<col_add<<endl; 
    }
}
