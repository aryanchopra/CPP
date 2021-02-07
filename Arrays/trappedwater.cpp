#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t>0){
    int size;
	cin>>size;
	
	int arr[size];
	int left[size];
	int right[size];
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	
	
    int max_=INT_MIN;
    int ans=0;
    
    for(int i=0;i<size;i++){
        max_=max(max_,arr[i]);
        left[i]=max_;
    }
    max_=INT_MIN;
    for(int i=size-1;i>=0;i--){
        max_=max(max_,arr[i]);
        right[i]=max_;
    }
    
    for(int i=0;i<size;i++){
        
        ans+= min(left[i],right[i])-arr[i];
    }
    cout<<ans<<endl;
    t--;
    }
	
	
}