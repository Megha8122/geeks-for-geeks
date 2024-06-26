//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here
        int carry=1;
        int n=s.length()-1;
        string str="";
        for(int i=n;i>=0;i--){
            if(carry==1){
                if(s[i]=='1'){
                    str='0'+str;
                    continue;
                }
                else{
                    str='1'+str;
                    carry=0;
                    continue;
                }
            }
            if(carry==0){
                str=s[i]+str;
            }
        }
        if(carry==1)
        str='1'+str;
        int pos=0;
        if(str[0]=='1')
        return str;
        for(int i=0;i<str.length();i++){
            if(str[i]!='0')
            {
                pos=i;
                break;
            }
        }
        return str.substr(pos,str.length()-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
