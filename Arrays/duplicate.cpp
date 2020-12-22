#include<bits/stdc++.h>
using namespace std;

void duplicate(int arr[],int n){
        for(int i=0;i<n;i++){
            arr[arr[i]%n]= arr[arr[i]%n]+n;
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n>1){
                cout<<i<<" ";
            }
        }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate(arr,n);
}