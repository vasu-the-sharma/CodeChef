#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long int maxi=arr[0], mini=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]>maxi)
                maxi=arr[i];
            if(arr[i]<mini)
                mini=arr[i];
        }

        long long int ans=maxi-mini;
        cout<<ans*2<<endl;
    }
}

