#include <iostream>
using namespace std;
void changeA(int &b){//passbyrefrence by alias
      b=20;  

    }
int main(){
    int a=10;
changeA(a);
cout<<a<<endl;
    

}