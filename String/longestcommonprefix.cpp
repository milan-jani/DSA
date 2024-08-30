#include<iostream>
#include<vector>
using namespace std;

main(){
    vector<string> strs = {"flower", "flow", "flight"};
    if(strs.empty())   cout<< "";
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            for(j=0;j<min(prefix.size(), strs[i].size()); j++){
                if(prefix[j]!=strs[i][j])   break;
            }
            prefix=prefix.substr(0,j);
            if (prefix.empty())  cout<< "";
        }
        cout<< prefix;
}