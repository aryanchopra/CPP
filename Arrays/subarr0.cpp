#include <bits/stdc++.h>
using namespace std;
bool zerofound(int arr[],int n){
    unordered_set<int> ump;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        
        if(sum==0 || ump.find(sum)!= ump.end()){
            return true;
        }
        
        ump.insert(sum);
    }

    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(zerofound(arr,n)){
        cout<<"True";
    }
    else{
     cout << "false";
    }
}
