#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int arr1[5];
    int n = 5;
    
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    } 
    
    for(int j = 0; j < 5; j++){
        arr1[n-1] = arr[j];
        n=n-1;
    }
    
    for(int k = 0; k < 5; k++){
        cout<<arr1f[k]<<endl;
    }
    return 0;
}