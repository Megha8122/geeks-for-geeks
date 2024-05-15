//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int isDisarium(int N) {
       string n=to_string(N);
       int res=0;
       for(int i=0;i<n.length();i++){
           int m=n[i]-'0';
           res+=pow(m,i+1);
       }
       return res==N?1:0;
   }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isDisarium(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
