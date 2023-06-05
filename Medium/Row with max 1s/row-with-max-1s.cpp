//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // Brute Force
	   // for(int i=0; i<m; i++){
	   //     for(int j=0; j<n; j++){
	   //         if(arr[j][i] == 1) return j;
	   //     }
	   // }
	   // return -1;
	   int j = m-1;
	   int ct = 0;
	   while(j >= 0 && arr[0][j] == 1){
	       j--;
	   }
	   int row = 0;
	   for(int i = 1; i < n; i++){
	       while(j >= 0 && arr[i][j] == 1){
	           j--;
	           row = i;
	       }
	   }
	   if(j == m-1) return -1;
	   return row;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends