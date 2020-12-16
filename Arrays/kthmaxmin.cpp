#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

void MaxMin(int arr[],int size,int kth){
    sort(arr,arr+size);
    cout<<kth<<" Smallest Element: "<<arr[kth-1]<<endl;
    cout<<kth<<" Largest Element: "<<arr[size-1-(kth-1)];
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int k;
    cin>>k;
    MaxMin(arr,n,k);
}