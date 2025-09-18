#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
string s;
    cin>>s;
    
    k = k % s.length();
    string rotated = s.substr(k) + s.substr(0, k); 
    cout << rotated << endl;
    
    return 0;
}