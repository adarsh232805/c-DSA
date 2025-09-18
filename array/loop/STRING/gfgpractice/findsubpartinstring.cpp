#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="adarshisdon";
    string a="don";
    // if str.find is used and store in int variable then it return the index of starting
  int res= s.find(a);
  if(res==string::npos){
    cout<<"not present"<<endl;
  }
  else{
    cout<<"at index"<<res;
  }
}