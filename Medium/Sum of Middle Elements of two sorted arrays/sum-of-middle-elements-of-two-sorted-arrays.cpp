//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            //First merging two arrays
            int left = n-1;
            int right = 0;
            while(left >= 0 && right < n){
                if(ar1[left] > ar2[right]){
                    swap(ar1[left], ar2[right]);
                    left--;
                    right++;
                }
                else break;
            }
            sort(ar1, ar1+n);
            sort(ar2, ar2+n);
            
            int median = (ar1[n-1] + ar2[0]);
            return median;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends