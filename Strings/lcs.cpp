#include <bits/stdc++.h>

using namespace std;
int static t[1001][1001];
// Top
int LCS(string s, string s2, int m, int n){
    
    if(m==0 || n==0){
        return 0;
    }
    if(t[m][n]!=-1){
        return t[m][n];
    }

    if(s[m-1]==s2[n-1]){
        return t[m][n] = 1+LCS(s,s2,m-1,n-1);
    }
    else{
        return t[m][n] = max(LCS(s,s2,m-1,n),LCS(s,s2,m,n-1));
    }
}
int main(){
    string s;
    string s2;
    cin>>s>>s2;
    int m= s.size();
    int n = s2.size();
    memset(t,-1,sizeof(int)*1001*1001);
    int ans = LCS(s,s2,m,n);
    cout<<ans;
}