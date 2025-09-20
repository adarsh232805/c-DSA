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
   bool found=false;
   for(int i=0;i<n;i++){
   if(vec[i]==0){
    found=true;
    break;
   }
   
}
if(found==true){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
}