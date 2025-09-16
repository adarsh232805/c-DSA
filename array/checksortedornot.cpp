#include <bits/stdc++.h>
using namespace std;
bool checksorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1]){
    return false;
}

    else {

    
    return true;
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
if (checksorted(arr, n)==true) {
    cout << "array is sorted";
} else {
    cout << "array is not sorted";
}
}