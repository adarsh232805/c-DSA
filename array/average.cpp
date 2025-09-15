#include<bits/stdc++.h>
using namespace std;
int ans=0;
int add(int arr[],int n){
for(int i=0;i<n;i++){
    ans=ans+arr[i];
   
}
return ans;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float sum=add(arr,n);
    cout<<sum/n;
   
}
