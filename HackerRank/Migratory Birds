int migratoryBirds(vector<int> arr) {
     int a=0,b=0,c=0,d=0,e=0;
     for(int i=0;i<arr.size();i++){
         if(arr[i]==1){
             a++;
         }
          if(arr[i]==2){
             b++;
         }
          if(arr[i]==3){
             c++;
         }
          if(arr[i]==4){
             d++;
         }
          if(arr[i]==5){
             e++;
         }
            
     }
     int max=0;
        max = (a > b)? a : b;
        max = (max > c)? max : c;
        max = (max > d)? max : d;
        max = (max > e)? max : e;
        
        if(max==a){
            return 1;
        }
        if(max==b){
            return 2;
        }
        if(max==c){
            return 3;
        }
        if(max==d){
            return 4;
        }
        if(max==e){
            return 5;
        }
     
      return max;  
     
}
