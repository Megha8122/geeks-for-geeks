//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector <int> temp;
	    for(int i=0; i < n; i++){
	        if(arr[i] != 0){
	            temp.push_back(arr[i]);
	        }
	    }
	    int nz = temp.size();
	    for(int i = 0; i < nz; i++){
	        arr[i] = temp[i];
	    }
	    for(int i = nz; i<n; i++){
	        arr[i] = 0;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
