#include <bits/stdc++.h>
#include <stack>
#define MAX 100
using namespace std;

vector<int> nsl(int arr[],int n){
    vector <int> v;
    stack <pair<int, int>> st;

    for(int i=0;i<n;i++){
        if(st.empty()) v.push_back(-1);
        else if (!st.empty() && st.top().first < arr[i]){
            v.push_back(st.top().second);
        }
        else if(!st.empty() && st.top().first >= arr[i]){
            while(!st.empty() && st.top().first >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top().second);
            }
        }
        st.push(make_pair(arr[i],i));

    }
    return v;

}

vector<int> nsr(int arr[],int n){
    vector <int> v;
    stack <pair<int, int>> st;

    for(int i=n-1;i>=0;i--){
        if(st.empty()) v.push_back(n);
        else if (!st.empty() && st.top().first < arr[i]){
            v.push_back(st.top().second);
        }
        else if(!st.empty() && st.top().first >= arr[i]){
            while(!st.empty() && st.top().first >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(n);
            }
            else{
                v.push_back(st.top().second);
            }
        }
        st.push(make_pair(arr[i],i));

    }
    reverse(v.begin(),v.end());
    return v;

}

int mah(int arr[],int n){
    vector<int> left = nsl(arr,n);
    vector<int> right = nsr(arr,n);
    vector <int> width;
    vector <int> area;
    for(int i=0;i<n;i++){
        width.push_back(right[i]-left[i]-1);
    }
    for(int i=0;i<n;i++){
        area.push_back(width[i]*arr[i]);
    }
    auto ans = *max_element(area.begin(),area.end());
    return ans;
}

int maxrec(int arr[MAX][MAX],int n, int m){
    int arr1[m];
    for(int i=0;i<m;i++){
        arr1[i]=arr[0][i];
    }
    int mx= mah(arr1,m);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr1[j]=0;
            }
            else{
                arr1[j]+=arr[i][j];
            }
        }
        mx=max(mx,mah(arr1,m));
    }
    return mx;
}


int main(){

    int n,m;
    cin>>n>>m;
    int matrix[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<maxrec(matrix,n,m);

}