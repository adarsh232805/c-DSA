#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n=8;
    int arr[n]={3,-4,5,4,-1,7,-8};
   int maxsum=0;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
           
                sum=sum+arr[end];
               
                maxsum=max(sum,maxsum);
            
           
        }
      
    }
    cout<<maxsum<<" ";

}