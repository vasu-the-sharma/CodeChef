#include <bits/stdc++.h>
using namespace std;
#define int long long

int helper(vector<int> weight, vector<int> dist){
    int ans=0;
    int idx1=find(weight.begin(),weight.end(),1)-weight.begin();
    int idx2=find(weight.begin(),weight.end(),2)-weight.begin();
    int temp=idx2;
    if(idx2<idx1){
        while(idx2<=idx1){
            idx2+=dist[temp];
            ans++;
        }
    }
    return ans;
}

int helperUtil(vector<int> weight, vector<int> dist){
    int ans=0;
    int idx1=find(weight.begin(),weight.end(),1)-weight.begin();
    int idx2=find(weight.begin(),weight.end(),2)-weight.begin();
    int temp1=idx2;
    if(idx2<idx1){
        while(idx2<=idx1){
            idx2+=dist[temp1];
            ans++;
        }
    }
    int idx3=find(weight.begin(),weight.end(),3)-weight.begin();
    int temp2=idx3;
    if(idx3<=idx2){
        while(idx3<=idx2){
            idx3+=dist[temp2];
            ans++;
        }
    }
    return ans;
}

int helperUtil2(vector<int> weight, vector<int> dist){
    
    int ans=0;
    int idx1=find(weight.begin(),weight.end(),1)-weight.begin();
    int idx2=find(weight.begin(),weight.end(),2)-weight.begin();
    int temp1=idx2;
    if(idx2<idx1){
        while(idx2<=idx1){
            idx2+=dist[temp1];
            ans++;
        }
    }
    int idx3=find(weight.begin(),weight.end(),3)-weight.begin();
    int temp2=idx3;
    if(idx3<=idx2){
        while(idx3<=idx2){
            idx3+=dist[temp2];
            ans++;
        }
    }
    int idx4=find(weight.begin(),weight.end(),4)-weight.begin();
    int temp3=idx4;
    if(idx4<=idx3){
        while(idx4<=idx3){
            idx4+=dist[temp3];
            ans++;
        }
    }
    return ans;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> weight(n,0);
        for(auto &i:weight)
            cin>>i;

        vector<int> dist(n,0);
        for(auto &i:dist)
            cin>>i;
        
        if(is_sorted(weight.begin(),weight.end())){
            cout<<0<<endl;
            continue;
        }

        if(n==2)
            cout<<helper(weight,dist)<<endl;
        else if(n==3)
            cout<<helperUtil(weight,dist)<<endl;
        else
            cout<<helperUtil2(weight,dist)<<endl;
    }
    return 0;
}
