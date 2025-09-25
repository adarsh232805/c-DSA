#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
       if(isdigit(s[i])){
        sum+=s[i]-'0';
       }
    }
    int n =s.length();
    sum%=n;
    
    if(sum%2==0){
       string rotatedr=s.substr(s.length()-sum)+s.substr(0,s.length()-sum);
       cout<<rotatedr;
    }
    else{

    
    string rotatedl=s.substr(sum)+s.substr(0,sum);
    cout<<rotatedl;
    }
}