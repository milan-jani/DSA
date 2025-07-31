string dayOfProgrammer(int year) {
    string date;
    string m="09.";
    string y=to_string(year);
    if (year==1918) {//transition
      date="26.";
    }
    else if(year >= 1700 && year <= 1917 ){//julian
    if (year%4==0) {
      date="12.";
    }
    else {
     date="13.";
    }
    }
    else if (year >= 1919) { //gregorian
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            date = "12."; 
        } else {
            date = "13."; 
        }
    }
    return date+m+y;
}
