//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int n = S.size();
        int left, right;
        int start = 0;
        int len = 1;

        for(int i=1; i<n; i++){
            //even case
            left = i;
            right = i-1;
            while(left >= 0 && right < n && S[left] == S[right]){
                if(right-left+1 > len){
                    start = left;
                    len = right-left+1;
                }
                left--, right++;
            }
            //odd case
            left = i-1;
            right = i+1;
            while(left >= 0 && right < n && S[left] == S[right]){
                if(right-left+1 > len){
                    start = left;
                    len = right-left+1;
                }
                left--, right++;
            }
        }
        return S.substr(start,len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends