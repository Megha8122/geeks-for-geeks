class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        int prefix=0,sum=0;
        for(int i=0; i<n; i++)
        {
            prefix=prefix+arr[i];
        }
        // sum=0;
        for(int j=0; j<n; j++)
        {
            if(sum==(prefix-sum-arr[j]))
            {
                return j+1;
            }
            sum+=arr[j];
        }
        return -1;
    }
};
