#include<iostream>
#include<vector>
using namespace std;
int main(){
// ininlize the vector
// input in vector
int n;
cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
    
   }
   for(int i=0;i<n;i++){
    cout<<vec[i];
   }

    
}