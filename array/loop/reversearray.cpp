#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
            high--;
        }
    }
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        reversearray(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}