#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> ans(n,0);
        for(auto &temp:ans)
            cin>>temp;

        int sum=accumulate(ans.begin(), ans.end(), 0);
        
        if(sum%2==0)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}
