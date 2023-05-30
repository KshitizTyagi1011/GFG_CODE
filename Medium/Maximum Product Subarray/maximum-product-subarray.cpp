//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
#define ll long long
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    ll product = 1;
	    ll maxi = INT_MIN;
	    for(int i=0; i<n; i++){
	        product *= arr[i];
	        maxi = max(product, maxi);
	        if(product == 0) product = 1;
	    }
	    //Right to Left
	   product = 1;
	   for(int i=n-1; i>=0; i--){
	        product *= arr[i];
	        maxi = max(product, maxi);
	        if(product == 0) product = 1;
	    }
	    return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends