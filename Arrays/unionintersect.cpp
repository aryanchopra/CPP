#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr2[m];

    map <int,int> ump;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ump[arr[i]]++;

    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        ump[arr2[i]]++;
        
    }
    cout<<"Union of the two arrays: "<<endl;
    for(const auto& e: ump){

        if(e.second>=1){
            cout<<e.first<<endl;
        }
    }
    cout<<"Intersection of the two arrays: "<<endl;
    for(const auto& e: ump){

        if(e.second>1){
            cout<<e.first<<endl;
        }
    }


}