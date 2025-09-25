#include <iostream>
using namespace std;
void changeA(int* a){//passbyrefrence by pointer
        *a=20;

    }
int main(){
    int a=10;
changeA(&a);
cout<<a<<endl;
    

}