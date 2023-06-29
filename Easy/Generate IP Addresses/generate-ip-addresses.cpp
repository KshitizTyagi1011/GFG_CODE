//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    bool isValid(string str) {
        if (str[0] == '0') return false;
        return stoi(str) <= 255;
    }
    
void solve(string &str, int index, string ans, vector<string> &result, int count) {
    // Base Case
        if (index >= str.length() || count == 4) {
            if (index >= str.length() && count == 4) {
                result.push_back(ans.substr(0, ans.length() - 1));
            }
            return ;
        }

        solve(str, index + 1, ans + str[index] + ".", result, count + 1);

        if (index + 2 <= str.length() && isValid(str.substr(index, 2)))
        solve(str, index + 2, ans + str.substr(index, 2) + ".", result, count + 1);

        if (index + 3 <= str.length() && isValid(str.substr(index, 3)))
        solve(str, index + 3, ans + str.substr(index, 3) + ".", result, count + 1);
    }
  public:
    vector<string> genIp(string &s) {
        vector<string> result;
        string ans;
        solve(s, 0, ans, result, 0);
        return result;
        
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends