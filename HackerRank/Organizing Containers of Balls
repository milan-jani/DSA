string organizingContainers(vector<vector<int>> c) {
   
    vector<int> rowsum;
    vector<int> colsum;
    
    for(int i=0;i<c.size();i++){
        int sum=0;
        for (int j=0; j<c.size(); j++) {
            sum+=c[i][j];
            
        }
        rowsum.push_back(sum);
    }
    int j=0;
    while (j<c.size()) {
        int sum=0;
    for(int i=0;i<c.size();i++){
       sum+=c[i][j];     
    }
     colsum.push_back(sum);
     j++;
    }
    sort(rowsum.begin(),rowsum.end());
    sort(colsum.begin(),colsum.end());
    
    
   for (int i=0; i<rowsum.size(); i++) {
        if(rowsum[i]!=colsum[i]) return "Impossible"; 
   }   
    return "Possible";
}
