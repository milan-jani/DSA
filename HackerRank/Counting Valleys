int countingValleys(int steps, string path) {
    int level,valley=0;
    for(int i=0;i<path.size();i++){
        if(path[i]=='U'){
            level++;
        }
        else
         level--;
        
        if(level ==0 && path[i]=='U')
           valley++;
    }
  return valley;
}
