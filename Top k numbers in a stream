class myComp
{
    public:
    
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const
    {
        if(a.second == b.second)
        {
            return a.first < b.first;
        }
        
        return a.second > b.second;
    }
};

class Solution {
  public:
    
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        // code here
        unordered_map<int,int> mp;
        
        set<pair<int,int>, myComp> st;
        
        int cnt;
        int tmp;
        int num;
        vector<int> ds;
        vector<vector<int>> ans;
        for(int i = 0; i < N; i++)
        {
            ds.clear();
            cnt = ++mp[arr[i]];
            tmp = K;
            
            if(cnt>=2)
            {
                st.erase({arr[i],cnt-1});
            }
            
            st.insert({arr[i],cnt});
            
            
            for(auto it : st)
            {
                if(tmp == 0)
                {
                    break;
                }
                
                num = it.first;
                ds.push_back(num);
                tmp --;
            }
            ans.push_back(ds);
        }
        
        return ans;
    }
};
