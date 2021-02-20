#include <bits/stdc++.h>
using namespace std;



bool subsetsum(int sum, int val[], int n){
    bool t[n+1][sum+1];

    for(int i=0;i<n+1;i++){
        t[i][0]=true;
    }

    for(int w=1;w<sum+1;w++){
        t[0][w]=false;
    }    

    for(int i=1;i<n+1;i++){
        for(int w=1;w<sum+1;w++){
            if(val[i-1]<=w){
                t[i][w]=t[i-1][w-val[i-1]]+t[i-1][w];
            }
            else{
                t[i][w]=t[i-1][w];
            }
        }
    }
    return t[n][sum];
}
bool eqsubset(int val[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=val[i];
    }
    if(sum%2!=0){
        return false;
    }
    else{
        return subsetsum(sum/2, val, n);
    }

}

int main(){
    int n;
    cin>>n;
    int val[n];
    
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    
    if(eqsubset(val,n)){
        cout<<"Truee";
    }
    else{
        cout<<"Not true";
    }

}
