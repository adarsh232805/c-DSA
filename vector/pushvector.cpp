#include<iostream>
#include<vector>
using namespace std;
int main(){
    // push_back() is used to insert elemnt at end
    vector<int> vec;
    cout<<"size"<<endl<<vec.size()<<endl;
    vec.push_back(25);
    cout<<"size"<<endl<<vec.size()<<endl;
    for(int val:vec){
        cout<<val<<endl;
    }
}
