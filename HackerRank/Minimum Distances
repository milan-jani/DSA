int minimumDistances(vector<int> a) {
    int n=a.size();
    
     vector<int> ans(100001,-1);
     int mindist=INT_MAX;
    
     for(int i=0;i<n;i++){
        int val=a[i];
        if(ans[val]!=-1){
            mindist=min(mindist,i-ans[val]);
        }
        ans[val]=i;
        }
        return (mindist==INT_MAX)? -1:mindist;
}
