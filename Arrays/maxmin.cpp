#include <iostream>
#include <limits.h>
using namespace std;

void MaxMin(int arr[],int size){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max element: "<<max<<endl;
    cout<<"Min element: "<<min<<endl;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    MaxMin(arr,n);
}