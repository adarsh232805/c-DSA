#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
    }
   
    for(int i=0;i<n;i++){
         int sum=0;
    int max=INT_MAX;
    int min=INT_MIN;
        for(int j=0;j<m;j++){
            sum+=nums[i][j];
            if(nums[i][j]>min){
                min=nums[i][j];
            }
            if(nums[i][j]<max){
                max=nums[i][j];
            }
        }
        cout<<sum<<" "<<max<<" "<<min;
    }
    
    return 0;   
    
    
    


}