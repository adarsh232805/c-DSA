#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    // used to store string with space
getline(cin,str1);
cout<<str1<<endl;
// everse a string
for(int i=str1.length()-1;i>=0;i--){
    str2 +=str1[i];
   
}
cout<<str2<<endl;
if(str2==str1){
    cout<<"palindrome"<<endl;
}
else{
    cout<<"not palindrome"<<endl;
}
}