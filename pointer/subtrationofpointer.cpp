#include <iostream>
using namespace std;
int main(){
int arr[]={1,2,3,44,5};
int *ptr=arr;
cout<<ptr<<endl;
cout<<*(arr+1)-*(arr+4)<<endl;// this return the no of block that are exist in between the both pointer

}