#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int ans;
    for(int i=10; i>=1; i--){
        if(n%i==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
}

