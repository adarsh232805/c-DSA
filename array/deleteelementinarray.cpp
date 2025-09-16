#include<bits/stdc++.h>
using namespace std;
//shifting the element for delete 
void deleteelement(int arr[],int &n,int pos){
    if(pos>n || pos<0){
        cout<<"invalid postion"<<endl;
        return ;
    }
    //shifting the element
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main(){
int n;
cin>>n;
int pos;
cin>>pos;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
deleteelement(arr,n,pos);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}