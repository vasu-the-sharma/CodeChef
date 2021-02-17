#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;

    while(tc--){
        int n, k, d;
        cin>>n>>k>>d;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }

        if(sum<k){
            cout<<0;
        }else{
            int ans=sum/k;
            if(ans<d)
                cout<<ans;
            else
                cout<<d;
        }
        cout<<endl;
    }
return 0;
}
