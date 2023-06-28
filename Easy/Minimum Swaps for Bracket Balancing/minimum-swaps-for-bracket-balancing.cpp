//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        int OB = 0;
        int CB = 0;
        int ans = 0;
        int n = S.size();
        
        for(int i=0; i<n; i++){
            if(S[i] == ']') CB++;
            else{
                if(CB > OB){
                    ans += CB-OB;
                }
                OB++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends