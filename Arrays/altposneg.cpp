#include <bits/stdc++.h>
using namespace std;

void negalt(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<0 && arr[j]>=0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<0 && arr[j]<0){
            j--;
        }
        else if(arr[i]>0 && arr[j]>0){
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    i++;
    int k=0;
    if(i==0 || i==n){
        return;
    }
    while(i<n && k<n){
        swap(arr[i],arr[k]);
        k=k+2;
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    negalt(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}