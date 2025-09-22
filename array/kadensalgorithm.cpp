#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int maximum;
int main(){
    int n=8;
    int arr[n]={3,-4,5,4,-1,7,-8};
   int maxsum=0;
   int sum=0;
   for(int i=0;i<n;i++){
    sum=sum+arr[i];
    maxsum=max(maxsum,sum);
    if(sum<0){
        sum=0;
    }
   }
   cout<<maxsum;
}