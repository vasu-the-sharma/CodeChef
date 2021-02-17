#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> v1, vector<int> v2){
    int vec[26];
    memset(vec, 0, sizeof(vec));
    for(auto i:v2)
        vec[i]++;

    int ans=0;
    for(auto i:v1){
        if(vec[i]==1)
            ans++;
    }
return 2*(v1.size()-ans)*(v2.size()-ans);;
}

int32_t main(){                                           // for faster input
    static const int _ = []() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return 0;
    }();
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> vec;
        for(int i=0;i<n;++i){
            string s;
            cin>>s;
            vec.push_back(s);
        }
        
        map<string, vector<int>> temp;
        for(auto i:vec)
            temp[i.substr(1)].push_back(i[0]-'a');            // only lowercase letters

        int ans=0;
        for(map<string,vector<int>> :: iterator it=temp.begin(); it!=temp.end(); it++){
            for(map<string,vector<int>> :: iterator it2=it; it2!=temp.end(); it2++){
                ans+=helper(it->second, it2->second);
            }
        }
        cout<<ans<<endl;
    }    
return 0;
}
