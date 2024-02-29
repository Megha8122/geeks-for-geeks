//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == 1 && (mid == 0 || arr[mid-1] == 0)) return mid;
        else if(arr[mid] == 0) s = mid+1;
        else e = mid-1;
        mid = s + (e-s)/2;
    }
    return -1;
}
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
