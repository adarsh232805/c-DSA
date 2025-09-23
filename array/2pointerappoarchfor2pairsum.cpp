#include<iostream>
using namespace std;
int main(){
   int target=13; 
int arr[4]={2,7,11,15};
int i=0;
int j=4-1;
while(i<j){
if((arr[i]+arr[j])>target){
    j--;
}
else if((arr[i]+arr[j])<target){
    i++;
}
else{
    cout<<i<<" "<<j;
   break;
}
}
}
int blockStart = i - pos + 3;    
            int blockEnd = i - pos + 5;      
            int revIndex = blockEnd - (pos - 3); 
            if (revIndex < n) {
                cout << s[revIndex];
            }
