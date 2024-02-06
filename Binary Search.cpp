// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                res=i;
                break;
            }
            else{
                res=-1;
            }
        }
        return res;
    }
};
