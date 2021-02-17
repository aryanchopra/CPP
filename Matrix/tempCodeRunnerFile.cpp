int arr1[m];
    for(int i=0;i<m;i++){
        arr1[i]=arr[0][m];
    }
    int mx= mah(arr1,m);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                arr1[j]=0;
            }
            else{
                arr1[j]+=arr[i][j];
            }
        }
        mx=max(mx,mah(arr1,m));
    }
    return mx;