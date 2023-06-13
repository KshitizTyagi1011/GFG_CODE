//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
    bool solve(string A, vector<string>B, int i){
        int n = A.size();
        int n2 = B.size();
        if(i >= n){
            return true;
        }
        for(int j=i; j<n; j++){
            string left = A.substr(i, j-i+1);
            if(count(B.begin(), B.end(), left) && solve(A,B,j+1)){
                return 1;
            }
        }
        return 0;
    }
public:
    int wordBreak(string A, vector<string> &B) {
        return solve(A,B,0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends