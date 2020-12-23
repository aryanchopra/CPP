#include <bits/stdc++.h>
using namespace std;

int conseccount(int arr[],int n){
    set <int> set1;
    for(int i=0;i<n;i++){
        set1.insert(arr[i]);
    }
    int ans=0;
    int maxcount=1;
    for(int i=0;i<n;i++){
        if(set1.find(arr[i]-1)==set1.end()){

            int j = arr[i];
            while(set1.find(j)!=set1.end()){
                j++;
            }
            ans = j-arr[i];
            maxcount=max(maxcount,ans);
        }
        
        
    }
    
    return maxcount;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    ans = conseccount(arr,n);
    cout<<ans;
}