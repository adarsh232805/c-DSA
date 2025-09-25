#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(s[i]!=s[j]){
                count++;
            }
            if(s[i]==s[j]){
                break;

            }
            if(count==0){
                cout<<0;
            }
            else{
cout<<count;
            }
        }
    }
}