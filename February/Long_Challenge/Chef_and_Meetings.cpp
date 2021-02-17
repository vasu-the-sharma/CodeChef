#include<bits/stdc++.h>
using namespace std;

int getMins(string s){
    string s1="";
    s1+=s[0];
    s1+=s[1];
    int hour=std::stoi(s1);

    string s2="";
    s2+=s[3];
    s2+=s[4];
    int mins=std::stoi(s2);

    if(hour==12)
        hour=0;

return (hour*60)+mins;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string time1, time2;
        cin>>time1>>time2;
        int n;
        cin>>n;
        string ans="";
        int t1=getMins(time1);
        if(time2[0]=='P')
            t1+=720;

        while(n--){
            string a, b;
            cin>>a>>b;
            string c, d;
            cin>>c>>d;

            int t2=getMins(a);
            if(b[0]=='P')
                t2+=720;
            
            int t3=getMins(c);
            if(d[0]=='P')
                t3+=720;
            
            if(t1<=t3 && t1>=t2)
                ans+='1';
            else
                ans+='0';
        }
        cout<<ans<<endl;
    }
return 0;
}
