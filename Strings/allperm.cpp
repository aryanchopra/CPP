#include <bits/stdc++.h>
using namespace std;

void allperm(string a,int l, int r){
    if(l==r){
        cout<<a<<" ";
    }
    else{
        for(int i=l;i<r;i++){
            swap(a[l],a[i]);
            allperm(a,l+1,r);
            swap(a[l],a[i]);
        }
    }
}

int main(){
    string s;
    cin>>s;
    allperm(s,0,s.size());
}