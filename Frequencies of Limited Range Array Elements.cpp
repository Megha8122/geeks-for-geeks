//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    
    void frequencyCount(vector<int>& arr,int N, int P)
    {

int i =0; 
        while(i<N){
            if(arr[i] <= 0 || arr[i] >N|| arr[i] >P){
                i++;
                continue;
            }
            
            //find index corresponding to this element 
            int elementindex = arr[i] -1;
            if(arr[elementindex]>0){
                arr[i] = arr[elementindex];
                
                //after storing arr elementindex ,change it to store initial count of arr[i]
                arr[elementindex] = -1;
            }
            else{
                //if this is not firstt occurrence of arr[i], , then decrement itd count
                arr[elementindex]--;
                arr[i] = 0;
                i++;
                
            }
        }
        for(int i =0 ; i <N; i++) {
            if ( arr[i] <0) arr[i] = -arr[i];
            else arr[i] =0;
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
