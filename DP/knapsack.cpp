#include<bits/stdc++.h>
using namespace std;

int Knapsack(int W, int wt[], int val[], int n, int** t){
    

    if(n==0||W==0) return 0;

    if(t[n][W]!=-1){
        return t[n][W];
    }

    if(wt[n-1]<=W){
        t[n][W] =  max(val[n]+Knapsack(W-wt[n-1],wt,val,n-1,t),Knapsack(W,wt,val,n-1,t));
        return t[n][W];
    }
    else {
        t[n][W]=  Knapsack(W,wt,val,n-1,t);
        return t[n][W];
    }
}

int knapSackinit(int W, int wt[], int val[], int n)
{
    // double pointer to declare the
    // table dynamically
    int** t;
    t = new int*[n];
 
    // loop to create the table dynamically
    for (int i = 0; i < n; i++)
        t[i] = new int[W + 1];
 
    // loop to initially filled the
    // table with -1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            t[i][j] = -1;
    return Knapsack(W, wt, val, n-1, t);
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
    
    cout<<knapSackinit(W,wt,val,n);

}
