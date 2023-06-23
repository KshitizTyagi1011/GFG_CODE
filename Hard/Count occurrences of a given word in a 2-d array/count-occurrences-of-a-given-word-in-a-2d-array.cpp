//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    int ans = 0;
    void solve(int i, int j, string& s, vector<vector<char>> &ch, int size, int idx, int n, int m){
        int found = 0;
        if(i>=0 && j>=0 && i<n && j<m && s[idx] == ch[i][j]){
            char temp = s[idx];
            ch[i][j] = 0;
            idx++;
            if(idx == size) ans++;
            else{
                solve(i+1, j, s, ch, size, idx, n, m);
                solve(i-1, j, s, ch, size, idx, n, m);
                solve(i, j+1, s, ch, size, idx, n, m);
                solve(i, j-1, s, ch, size, idx, n, m);
            }
            //backtrack
            ch[i][j] = temp;
        }
    }
    public:
    int findOccurrence(vector<vector<char> > &mat, string target){
        int n = mat.size();
        int m = mat[0].size();
    
        int size = target.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                solve(i,j,target,mat,size,0,n,m);
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends