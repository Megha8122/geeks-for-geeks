//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1,string str2){

if(str1.length()<=2||str1.length()!=str2.length()) return 0;
            string s1;
            string s2;
            s2+=str1[str1.length()-2];
            s2+=str1[str1.length()-1];
            for(int i=2,j=0;i<str1.length(),j<str1.length()-2;i++,j++){
                s1+=str1[i];
                s2+=str1[j];
            }
            s1+=str1[0];
            s1+=str1[1];
            if(s1==str2 || s2==str2) return 1;
            else return 0;

}

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
