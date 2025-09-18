#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n){
        int max=0;
        for(int i=0;i<n;i++){
            if(arr[i]> arr[max]){
                max=i;
            }
        }
    }

int secondlargest(int arr[],int n){
    int largest=getlargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){  
    res=i; 
        }
        else if(arr[i]>arr[res]){
            res=i;
        }
    }

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondlargest(arr,n);
    

}