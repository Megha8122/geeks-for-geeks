    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        std::vector<long long int> v;
        long long int countZeroes=0;
        long long int prod=1;
        for(long long int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                countZeroes++;
            }
            else
            {
                prod=prod*nums[i];
            }
        }
        
        if(countZeroes>=2)
        {
            for(long long int j=0;j<n;j++)
            {
                v.push_back(0);
            }
            return v;
        }
        if(countZeroes==1)
        {
            for(long long int k=0;k<n;k++)
            {
                if(nums[k]==0)
                {
                    v.push_back(prod);
                }
                else
                {
                    v.push_back(0);
                }
            }
        }
        
        else
        {
            for(long long int m=0;m<n;m++)
            {
                v.push_back(prod/nums[m]);
            }
        }
        return v;
    }
