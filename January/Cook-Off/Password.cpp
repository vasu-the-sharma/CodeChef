#include<bits/stdc++.h>
using namespace std;

bool hasDigit(string s){
    for(int i=1; i<s.length()-1; i++){
        if(s[i]>='0' && s[i]<='9')
            return true;
    }
return false;
}

bool hasLower(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z')
            return true;
    }
return false;
}

bool hasUpper(string s){
    for(int i=1; i<s.length()-1; i++){
        if(s[i]>='A' && s[i]<='Z')
            return true;
    }
return false;
}

bool hasSpecial(string s){
    for(int i=1; i<s.length()-1; i++){
        if(s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?')
            return true;
    }
return false;
}

bool isValid(string s){
    return (hasDigit(s) && hasSpecial(s) && hasUpper(s) && hasLower(s));
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        if(s.length()<10)
            cout<<"NO"<<endl;
        else
            if(isValid(s))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
