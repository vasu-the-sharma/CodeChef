#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int rejected=0;
        int overTime=0;
        int maxTime=INT_MIN;

        for(int i=0; i<n; i++){
            if(arr[i]<0){
                rejected++;
            }
            if(arr[i]>k){
                overTime++;
            }
            maxTime=std::max(maxTime, arr[i]);
        }

        if(rejected>ceil(n/2)){
            cout<<"Rejected";
        }else if(overTime>0){
            cout<<"Too Slow";
        }else if(maxTime<=1 && rejected==0){
            cout<<"Bot";
        }else{
            cout<<"Accepted";
        }
        cout<<endl;
    }
}
