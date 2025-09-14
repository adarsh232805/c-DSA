#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
 
    for(int i=0;  i<size;i++){
        // print the array indices
cout<<i;
// print the element of array
cout<<arr[i];
    }
    
}