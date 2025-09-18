#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    // for slicing the string 
    string part=s.substr(k,n-2*k);
    cout<<part;
}