//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   string toLower(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
             s[i]=s[i]+32;
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.toLower(s) << endl;
    }
    return 0;
}

// } Driver Code Ends
