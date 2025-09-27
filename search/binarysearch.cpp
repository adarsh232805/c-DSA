#include <iostream>
#include<vector>
using namespace std;
int binaray( vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    
     vector<int> arr1={1,2,4,5,8,10,11};
    int target=4;
    vector<int> arr2={1,22,33,44,55};
int target2=55;
    cout<<binaray(arr2,target2);

}