#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(arr[i]>arr[j]){
            return false;
        }

    
    return true;
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorted(arr,n);
    if(sorted(arr,n)==true){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}
