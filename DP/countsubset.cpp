#include <bits/stdc++.h>
using namespace std;

int countsubsetsum(int sum, int val[], int n){
    int t[n+1][sum+1];

    for(int i=0;i<n+1;i++){
        t[i][0]=1;
    }

    for(int w=1;w<sum+1;w++){
        t[0][w]=0;
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


int main(){
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int val[n];
    
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    
    cout<<countsubsetsum(sum,val,n);

}
