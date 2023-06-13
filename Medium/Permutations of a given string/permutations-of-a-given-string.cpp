//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void solve(string s, int index, set<string>&ans){
        int n = s.size();
        //Base case
        if(index >= n){
            ans.insert(s);
            return;
        }
        
        for(int j=index; j<n; j++){
            swap(s[index], s[j]);
            solve(s, index+1, ans);
            //backtrack
            swap(s[index], s[j]);
        }
        
    }
	public:
		vector<string>find_permutation(string S)
		{
		    set<string>s;
		    vector<string>res;
		    int index = 0;
		    solve(S, index, s);
		    for(auto i : s) {
                res.push_back(i);
            }
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends