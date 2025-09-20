#include<bits/stdc++.h>
using namespace std;
void swapMaxMin(int arr[], int n) {
    int maxVal = arr[0], minVal = arr[0];
    int maxIdx = 0, minIdx = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
    }

    swap(arr[maxIdx], arr[minIdx]);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapMaxMin(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}