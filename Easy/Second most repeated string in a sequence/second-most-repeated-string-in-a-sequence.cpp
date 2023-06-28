//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        vector<int>v;
        for(auto i : mp){
            v.push_back(i.second);
        }
        
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int second_largest = v[1];
        
        for(auto i : mp){
            if(i.second == second_largest) return i.first;
        }
        return "";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends