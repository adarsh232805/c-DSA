#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

   vector<string> s(n);
   for(int i=0;i<n;i++){
     cin>>s[i];
   }
   vector<string> result;
   for(int i=0;i<n/2;i++){
    string first=s[i].substr(0,i+1);
    string second=s[n-1-i].substr(s[n-1-i].length()-1-i,i+1);
    string res=first+second;
    result.push_back(res);
   }
   for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
   }
}