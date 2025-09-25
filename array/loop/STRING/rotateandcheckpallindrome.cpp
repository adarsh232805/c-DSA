#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool ispalindrome(string s,int n){
    int st=0,end=n-1;
    while(st<end){
        if(s[st]!=s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    string z;
    cin>>z;

    string s1r=s.substr(n-k)+s.substr(0,n-k);
    string s2r=z.substr(k)+z.substr(0,k);
    string rotated=s1r+s2r;
    int l=rotated.length();
   
    cout<<ispalindrome(rotated,l);

}