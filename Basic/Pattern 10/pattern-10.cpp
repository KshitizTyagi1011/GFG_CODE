//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        int k = 1;
        for(int i=1; i<=2*n-1; i++){
            for(int j=1; j<=k; j++){
                cout<<"*"<<" ";
            }
            if(i >= n){
                k--;
            }
            else{
                k++;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends