#include<iostream>
#include<vector>
using namespace std;
int main(){
// ininlize the vector
// input in vector
int n;
cin>>n;
int key=0;

   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
    
   }
   for(int i=n-1;i>=0;i--){
    cout<<vec[i];
   }
}