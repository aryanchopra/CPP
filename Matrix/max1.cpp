int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int maxcount=0;
	    int row=-1;
	    for(int i=0;i<n;i++){
	        int count=0;
	        
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                count++;
	            }
	            if(count==maxcount){
	                continue;
	            }
	            
	            maxcount=max(count,maxcount);
	            if(maxcount==count){
	                row=i;
	            }
	        }
	    }
	    return row;