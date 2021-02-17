#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int flag=s[0];
        int count=0, zero=0;
        vector<int> prefix(n);

        for(int i=0;i<n;i++){
            if(s[i]=='0')
                zero++;
            
            prefix[i]=zero;
        }
        
        int temp=0;
        int total=min(zero,n-zero);

        for(int i=0;i<n;i++){
            if(s[i]=='1')
                temp++;

            total = min(total, temp+zero-prefix[i]);
        }
        
        cout<<total<<endl;
    }
}
