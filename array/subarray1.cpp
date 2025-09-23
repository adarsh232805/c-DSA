#include<iostream>
using namespace std;
int main(){
   int target=13; 
int arr[4]={2,7,11,15};
for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<" "<<j;
            
        }
    }
}
}