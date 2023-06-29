//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        unordered_set<char>s;
        for(auto c : str){
            s.insert(c);
        }
        
        unordered_map<char, int> mp;
        int i = 0;
        int j = 0;
        int ans = str.size();
        int n = s.size();
        
        while(i < str.size()){
            mp[str[i]]++;
            if(mp.size() == n){
                while(mp[str[j]] - 1 != 0){
                    mp[str[j]]--;
                    j++;
                }
                ans = min(ans, i-j+1);
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends