vector<int> circularArrayRotation(const vector<int>& a, int k, const vector<int>& queries) {
    int n = a.size();
    k %= n;
    vector<int> result;
    for (int idx : queries) {
        result.push_back(a[(n - k + idx) % n]);
    }
    return result;
}
