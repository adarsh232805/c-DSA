#include <iostream>
#include <string>
#include <cctype>   
using namespace std;

int main() {
    int n ;
    cin>>n;
    string s;
    
cin>>s;
    string result  , specials ;

    for (char i=0;i<=n;i++ ) {
        if (isalpha(s[i])) {
            
            result += tolower(s[i]);
        }
        else if (isdigit(s[i])) {
            
            result += s[i];
        }
        else {
            
            specials += s[i];
        }
    }

    
    result += specials;

    cout << result << endl;
    
}
