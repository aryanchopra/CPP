unordered_set <int> set1;
    for(int i=0;i<n;i++){
        set1.insert(arr[i]);
    }
    int count=1;
    int maxcount=1;
    for(int i=0;i<n;i++){
        if(set1.find(arr[i]+1)!=set1.end()){
            count++;
        }
        else count=1;
        maxcount=max(maxcount,count);
    }
    cout<<maxcount;
    return maxcount;