#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[]="adarsh";
    char s2[]={'a','b','c','\0'};
    // strlen is used to find the lenghth of string
    cout<<strlen(s1)<<endl;
    cout<<strlen(s2)<<endl;
    // strcmp is used to compare the string through ascii value
    int res=strcmp(s1,s2);
    if(res==0){
        cout<<"same"<<endl;

    }
    else if(s1>s2){
        cout<<"s1 is greater"<<endl;
    }
    else{
        cout<<"smaller"<<endl;
    }
    // strcpy is used to copy the string
    char str3[5];
    strcpy(str3,"gfg");
    cout<<str3<<endl;
}