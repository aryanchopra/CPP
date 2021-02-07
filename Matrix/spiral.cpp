#include <bits/stdc++.h>
using namespace std;



int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> vec( r , vector<int> (c)); 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>vec[i][j];
        }
    }
    int row_start=0;
    int row_end=r-1;
    int col_start=0;
    int col_end=c-1;

    while(row_start<=row_end && col_start<=col_end){
        for(int col=col_start;col<=col_end;col++){
            cout<<vec[row_start][col]<<" ";
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++){
            cout<<vec[row][col_end]<<" ";
        }
        col_end--;
        
        for(int col=col_end; col>=col_start;col--){
            cout<<vec[row_end][col]<<" ";
        }
        row_end--;
        for(int row=row_end;row>=row_start;row--){
            cout<<vec[row][col_start]<<" ";
        }
        col_start++;
    }

    return 0;

}