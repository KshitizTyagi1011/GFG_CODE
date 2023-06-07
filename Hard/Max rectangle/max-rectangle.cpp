//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    vector<int> prev_smaller(vector<int>& a, int n){
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
    
    vector<int> next_smaller(vector<int>& a, int n){
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
    
    int Histogram(vector<int>& arr)
    {
        int n = arr.size();
        vector<int>prev(n);
        prev = prev_smaller(arr,n);
        vector<int>next(n);
        next = next_smaller(arr,n);
        int maxAns = INT_MIN;
        for(int i=0; i<n; i++){
            if(next[i] == -1) next[i] = n;
            int ans = (next[i] - prev[i] - 1) * arr[i];      //n-p-1 * a[i]
            maxAns = max(ans, maxAns);
        }
        return maxAns;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        vector<int>v(m,0);
        int maxAns = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j] == 0) v[j] = 0;
                else v[j] += 1;
            }
        int curAns = Histogram(v);
        maxAns = max(maxAns, curAns);
      }
        return maxAns;
    }
   
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends