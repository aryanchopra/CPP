#include <bits/stdc++.h>

using namespace std;

int LCS(string s, string s2, int m, int n){
    int t[m+1][n+1];
    memset(t,-1,sizeof(int)*(m+1)*(n+1));

    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
        if(i==0 || j==0){
            t[i][j]=0;
        }

        else if(s[i-1]==s2[j-1]){
            t[i][j] = 1+t[i-1][j-1];
        }
        else{
            t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
        }
    }
    return t[m][n];   
    
}
int main(){
    string s;
    string s2;
    cin>>s>>s2;
    int m= s.size();
    int n = s2.size();
 
    int ans = LCS(s,s2,m,n);
    cout<<ans;
}