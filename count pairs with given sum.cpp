//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
    map<int, int> freq;
    int result = 0;
    for(int i=0; i<n; i++) {
        if(freq.find(k-arr[i]) != freq.end())
            result += freq[k-arr[i]];
        freq[arr[i]]++;
    }
    return result;
}
};
