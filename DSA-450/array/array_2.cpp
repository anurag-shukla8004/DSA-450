#include <iostream>
using namespace std;

int main(){
    
int arr[10];
int a = 0;
for(int a = 0; a < 10; a++){
    cin>>arr[a];
}

    for(int a = 1; a < 10; a++){
        if(arr[0]< arr[a]){
            arr[0] = arr[a];
        }
    }
    
    cout<<arr[0];
     
   
    return 0;
}

 

   


