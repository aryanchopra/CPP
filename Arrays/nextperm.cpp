#include <iostream>
using namespace std;
void swap(int arr[], int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;

}

void reverseArray(int arr[],int start, int end){
    if(start<end){
        swap(arr,start,end);
        reverseArray(arr,start+1,end-1);
    }
    else{
        return;
    }
}

void nextPerm(int arr[],int n){
    int i= n-2;
    while(arr[i]>arr[i+1]){
        i--;
    }
    int j=n-1;
    while(arr[j]<arr[i]){
        j--;
    }
    swap(arr,i,j);
    reverseArray(arr,i+1,n-1);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    nextPerm(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}