#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[],int val[], int n){
    int t[n+1][W+1];

    for(int i=0;i<n+1;i++){
        for(int w=0;w<W+1;w++){
            if(i==0||w==0){
                t[i][w]=0;
            }
            else if(wt[i-1]<=w){
                t[i][w]=max(val[i-1]+t[i-1][w-wt[i-1]],t[i-1][w]);
            }
            else{
                t[i][w]=t[i-1][w];
            }
        }
    }
    return t[n][W];
}


int main(){
    int W;
    cin>>W;
    int n;
    cin>>n;
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    
    cout<<knapsack(W,wt,val,n);

}
