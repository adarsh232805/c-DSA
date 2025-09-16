#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        if(i%n==0){
            continue;
        }
        cout<<i<<" ";
    }
}