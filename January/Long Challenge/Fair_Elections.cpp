#include<bits/stdc++.h>
using namespace std;

int countSwaps(int A[], int B[], int n, int m, int votesA, int votesB){
    if(votesA > votesB)
        return 0;
    
        sort(A, A+n);                                   // sorting A
        sort(B, B+m, greater<int>());                   // sorting B in reverse order

        int i=0, j=0, count=0;                          // j from 0 to m-1, i from 0 to n-1
        while(i<=n-1 && j<=m-1){
            if(votesA>votesB)
                return count;
                
            votesA=votesA-A[i]+B[j];
            votesB=votesB+A[i]-B[j];
            j++;
            i++;
            count++;
        }
    
        if(votesA>votesB)
            return count;
        else
            return -1;
}

int main() {

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        int A[n];
        int B[m];
        
        for(int i=0; i<n; i++)              // input for array A
            cin>>A[i];
        for(int i=0; i<m; i++)              // input for array B
            cin>>B[i];

        int votesA=0, votesB=0;
        for(int i=0; i<n; i++)              // total votes for John
            votesA+=A[i];
        for(int i=0; i<m; i++)              // total votes for Jack
            votesB+=B[i];

        cout<<countSwaps(A, B, n, m, votesA, votesB)<<endl;
    }
    return 0;
}
