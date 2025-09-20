#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
        
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //search(arr,n,key);
    cout<<search(arr,n,key);
    }
