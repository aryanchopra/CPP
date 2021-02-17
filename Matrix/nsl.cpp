#include <bits/stdc++.h>
#include <stack>
using namespace std;

void nsl(int arr[],int n){
    vector <int> v;
    stack <int> st;

    for(int i=0;i<n;i++){
        if(st.empty()) v.push_back(-1);
        else if (!st.empty() && st.top()<arr[i]){
            v.push_back(st.top());
        }
        else if(!st.empty() && st.top()>=arr[i]){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);

    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";

}
void nsr(int arr[],int n){
    vector <int> v;
    stack <int> st;

    for(int i=n-1;i>=0;i--){
        if(st.empty()) v.push_back(-1);
        else if (!st.empty() && st.top()<arr[i]){
            v.push_back(st.top());
        }
        else if(!st.empty() && st.top()>=arr[i]){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);

    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++) cout<<v[i]<<" ";

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    nsr(arr,n);

}