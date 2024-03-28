//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    unordered_map<int,int>s;
    for(int i=0;i<size;i++)
    {
        s[arr[i]]++;
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        int key=it->first;
        int val=it->second;
        int pair=n+key;
        if(key==pair)
        {
            if(val>1)
            return true;
        }
         else if(s.find(pair)!=s.end())
        return true;
    }
    return false;
    
}
