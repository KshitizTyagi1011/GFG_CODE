//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    int get_max(int arr[], int n){
        int max = INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
    
     int get_min(int arr[], int n){
        int min = INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        return min;
    }
    
    
   public:
    int findSum(int A[], int N)
    {
    // 	sort(A, A+N);
    // 	int i = A[0];
    // 	int j = A[N-1];
    	
    // 	int sum = i + j;
    // 	return sum;
    return get_max(A,N) + get_min(A,N);
    }
    
    

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends