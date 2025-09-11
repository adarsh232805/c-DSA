#include <bits/stdc++.h>
using namespace std;

int main() {
      int n ,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            swap(nums[i][m-k+j],nums[n-i-1][j]);
        }

        }
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<nums[i][j]<<" ";
        }
    }
}

