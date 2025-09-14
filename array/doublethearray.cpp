#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size;i++){
        arr[i]=arr[i]*2;
        cout<<arr[i];
    }
}