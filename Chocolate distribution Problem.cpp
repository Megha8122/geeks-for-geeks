//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin(),a.end());
        int ptr1=0;
        int ptr2=m-1;
        int diff=a[ptr2]-a[ptr1];
        while(ptr2<n){
            if((a[ptr2]-a[ptr1])<diff){
                diff=a[ptr2]-a[ptr1];
            }
            ptr1++;
            ptr2++;
        }
        return diff;
    }  
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
