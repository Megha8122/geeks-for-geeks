class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int,int> m;
            vector<int> ans;    
            for(int i=0;i<n1;i++)m[A[i]]=1;
            for(int i=0;i<n2;i++)if(m[B[i]]==1)m[B[i]]=2;
            for(int i=0;i<n3;i++)if(m[C[i]]==2)m[C[i]]=3;
            
            for(pair<const int,int> &i : m)if(i.second==3)ans.push_back(i.first);
            
            return ans;
        }

};
