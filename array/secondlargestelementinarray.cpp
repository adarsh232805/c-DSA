#include <bits/stdc++.h>
using namespace std;
    void sort(int arr[],int n){
        int max=i;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        // swap the element
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
//cout<<sort(arr,n);
cout<<endl;
cout<<arr[n-2];
}
    