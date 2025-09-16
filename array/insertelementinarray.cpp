#include <bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int value,int pos){
    // loop for shifting the elements
    for(int i=n-1;i>=pos;i--)
{
    arr[i+1]=arr[i];
}
arr[pos]=value;
n=n+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int value=3;
    int pos=2;


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   insert(arr,n,value,pos);
    for(int i=0;i<n+1;i++){
     cout<<arr[i]<<" ";
    }

   




}
    