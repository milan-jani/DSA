int sockMerchant(int n, vector<int> ar) {
    int c=0;
    for (int i=0;i<ar.size();i++) {
        for (int j=i+1;j<ar.size();j++) {
            if (ar[i]==0) {
                break;
            }
            if (ar[i]==ar[j]) {
                c++;
                ar[i]=0;
                ar[j]=0;
                break;
            }
        }
    }
    return c;
}
