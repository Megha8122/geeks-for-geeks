//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
     string reverseWords(string S) 
    { 
        // code here
        int n=S.size()-1;
        
        string str="";
        
        string temp="";
        
        for(int i=n;i>=0;i--)
        {
            if(S[i]=='.')
            {
                reverse(temp.begin(),temp.end());
                str+=temp;
                str+='.';
                //cout<<"string is="<<str<<endl;
                temp="";
            }
            else
            {
                temp+=S[i];
            }
        }
         reverse(temp.begin(),temp.end());
         str+=temp;
        return str;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
