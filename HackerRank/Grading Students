vector<int> gradingStudents(vector<int> grades) {
    int n=0;
    vector<int> a(grades.size());
  for(int i=0;i<grades.size();i++){
       if (grades[i]<38) {
           a[i]=grades[i];
       
       }
       else  {
           for (int j=grades[i]; grades.size(); j++) {
               if (j%5==0){
                   n=j;
               
               if(n-grades[i]<3){
                   a[i]=n;
                   break;
               }
               else {
                   a[i]=grades[i];
                   break;
               }
                
               
               }
           
           }
       } 
      

    }
    return a;
}
