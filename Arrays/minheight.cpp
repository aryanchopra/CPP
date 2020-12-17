#include <bits/stdc++.h>
#include<climits>
using namespace std;

int MinHeight(int arr[],int n, int k){
    if (n==1){
        return 0;
    }
    sort(arr,arr+n);
    vector <pair <int,int>> arr2;
    vector <int> visited(n);

    for(int i=0;i<n;i++){
        if(arr[i]-k>=0){
            arr2.push_back(make_pair((arr[i]-k),i));
            arr2.push_back(make_pair((arr[i]+k),i));
        }
        else{
            arr2.push_back(make_pair((arr[i]+k),i));
        }
        
    }

    sort(arr2.begin(),arr2.end());
    int elements_in_range=0;
    int left=0;
    int right=0;

    while(elements_in_range<n && right<arr2.size()){
        if(visited[arr2[right].second]==0){
            elements_in_range++;
        }
        visited[arr2[right].second]++;
        right++;
    }
    
    int ans= arr2[right-1].first - arr2[left].first;

    while(right<arr2.size()){
        if(visited[arr2[left].second]==1){
            elements_in_range--;
        }
        visited[arr2[left].second]--;
        left++;
        while(elements_in_range<n && right<arr2.size()){
            if(visited[arr2[right].second]==0){
                elements_in_range++;
            }
            visited[arr2[right].second]++;
            right++;
        }
        if(elements_in_range==n){
            ans=min(ans,arr2[right-1].first-arr2[left].first);
        }
        else{
            break;
        }
    }
    return ans;
    
    }


int main(){
    int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = MinHeight(arr, n, k);
        cout << ans << "\n";

}