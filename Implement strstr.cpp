//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends
// } Driver Code Ends
// } Driver Code Ends
// } Driver Code Ends

//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
   
     for(int i = 0; i < s.size(); i++){
         bool flag = false;
             for(int j = 0; j < x.size() ; ){
                 if(s[i+j] != x[j]){
                      flag = false;
                     break;
                 }else{
                     j++;
                     flag = true;
                 }
             }
         if(flag == true){
             return i;
         }
     }
     return -1;
}
