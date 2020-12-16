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
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,0,n-1);
    cout<<"reversed array: \n"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
