int pickingNumbers(vector<int> a) {
    vector<int> freq(101, 0); 

   
    for (int num : a) {
        freq[num]++;
    }

    int maxLen = 0;


    for (int i = 0; i < 100; i++) {
        maxLen = max(maxLen, freq[i] + freq[i + 1]);
    }

    return maxLen;
}
