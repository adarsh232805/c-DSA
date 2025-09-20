#include<iostream>
using namespace std;
int small(int arr[],int n){
    int smallest=arr[0];
    for(int i=0;i<n;i++)
    {
    if(arr[i]<smallest)
    {
      smallest=arr[i]  ;
    }
    }
    return smallest;
}
int main(){
    // smallest element in array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    small(arr,n);
    cout<<small(arr,n);
}