//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
              int temp=0,ans=0,diff;
        while(temp<d)
        {
            ans++;
            temp+=ans;
        }
        if(temp==d)
        return ans;
        diff=temp-d;
        if(diff%2==0)
        return ans;
        return ans%2==0?ans+1:ans+2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends
