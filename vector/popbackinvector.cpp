#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<"size"<<endl<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"size"<<endl<<vec.size()<<endl;
    // pop back() is used to delete the last element
    vec.pop_back();
    cout<<"size"<<endl<<vec.size()<<endl;
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<vec.front()<<endl;// print first elemnt

    cout<<vec.back()<<endl;// print the last elemnt 
    cout<<vec.at(0)<<endl; // print the value at index
    cout<<vec.capacity()<<endl;// print the capacity
}
