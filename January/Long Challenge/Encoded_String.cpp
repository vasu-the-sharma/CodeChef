#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
    
        char arr[16] {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};

        int len=s.length();
        int count=len/4;

        int j=0;
        while(count>0){
            int itr=0;
            int mid, low=0, high=15;

            for(int i=0; i<4; i++){
                mid=low+(high-low)/2;
                
                if(s[j]=='0')
                    low=low, high=mid;
                else
                    low=mid+1, high=high;
                j++;
            }
            cout<<arr[mid+(high-mid)];
            count--;
        }
        cout<<endl;
    }

return 0;
}
