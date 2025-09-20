#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
int s=0;

for(int i=0;i<n;i++){
    s=s+arr[i];
   
}
return s;

}
int product(int arr[],int n)
{
    int p=1;

for(int i=0;i<n;i++){
    
    p=p*arr[i];
}
return p;

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sum(arr,n);
    int ans1=product(arr,n);
    cout<<ans;
    cout<<ans1;
}