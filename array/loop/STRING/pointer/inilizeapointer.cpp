#include <iostream>
using namespace std;
int main (){
    int a=10;
    int *p=&a;
    int **ptr=&p;
    cout<<p<<endl;
    cout<<&a<<endl;

cout<<&p<<endl;
cout<<ptr<<endl;
}