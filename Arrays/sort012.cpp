#include <bits/stdc++.h>
using namespace std;
int main(){
    int c0=0;
    int c1=0;
    int c2=0;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        if(x==0||x==1||x==2){
            arr[i]=x;
        }
        else{
            cout<<"Invalid element!"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        c0++;
        if(arr[i]==1)
        c1++;
        if(arr[i]==2)
        c2++;
    }
    int i=0;
    while (c0 > 0) { 
        arr[i++] = 0; 
        c0--; 
    } 
  
    
    while (c1 > 0) { 
        arr[i++] = 1; 
        c1--; 
    } 
  
    
    while (c2 > 0) { 
        arr[i++] = 2; 
        c2--; 
    } 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}