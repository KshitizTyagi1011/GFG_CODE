//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // int setbit = 0;
        // while(N != 0){
        //     int rem = N%2;
        //     if(rem == 1) setbit++;
        //     N = N/2;
        // }
        // return setbit;
        
        //Other Approach  (Brian's Algo)
        int setbit = 0;
        while(N != 0){
            setbit++;
            N = (N & (N-1));
        }
        return setbit;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends