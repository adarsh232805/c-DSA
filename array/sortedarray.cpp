#include<iostream>
using namespace std;
bool checksorted(int arr[],int size){
    for(int i=0;i<size;i++)
{
    if(arr[i]>arr[i+1]){
        return false;
    }
    else{
    return true;
    }
}
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    if(checksorted(arr,size)==true){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }

}