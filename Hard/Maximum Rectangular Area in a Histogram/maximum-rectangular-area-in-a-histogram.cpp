//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    vector<int> prev_smaller(long long a[], int n){
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=0; i<n; i++){
        while(s.top() != -1 && a[s.top()] >= a[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    }
    
    vector<int> next_smaller(long long a[], int n){
        vector<int>ans(n);
        stack<int>s;
        s.push(-1);
        for(int i=n-1; i>=0; i--){
        while(s.top() != -1 && a[s.top()] >= a[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    }
    
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<int>prev(n);
        prev = prev_smaller(arr,n);
        vector<int>next(n);
        next = next_smaller(arr,n);
        long long maxAns = INT_MIN;
        for(int i=0; i<n; i++){
            if(next[i] == -1) next[i] = n;
            long long ans = (next[i] - prev[i] - 1) * arr[i];      //n-p-1 * a[i]
            maxAns = max(ans, maxAns);
        }
        return maxAns;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends