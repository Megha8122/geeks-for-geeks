class Solution{
  public:
   vector<int> duplicates(long long arr[], int n) {
        vector<int>v;
        unordered_map<int,int>mp;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>1){
                v.push_back(arr[i]);
                mp[arr[i]]=1;
            }
        }
        if(v.size()==0){
            return {-1};
        }
        return v;
    }
};

