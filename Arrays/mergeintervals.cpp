vector<vector<int>> merge(vector<vector<int>>& inv) {
        sort(inv.begin(),inv.end());
        int start=inv[0][0];
        int end=inv[0][1];
        vector<vector <int>> answer;
        int i=1;
        
        while(i<inv.size()){
            if(inv[i][0]>start && inv[i][0]>end){
                vector<int> v;
                v.push_back(start);
                v.push_back(end);
                answer.push_back(v);
                start=inv[i][0];
                end=inv[i][1];
                
            }
            else{
                start=min(start,inv[i][0]);
                end=max(end,inv[i][1]);
            }
            i++;
        }
        i=inv.size()-1;
        vector<int> v;
        v.push_back(start);
        v.push_back(end);
        answer.push_back(v);
        return answer;
        
        
    }