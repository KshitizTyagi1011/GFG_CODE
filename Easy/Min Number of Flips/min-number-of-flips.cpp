//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    int n = S.size();
    int ct_zero = 0;
    int ct_one = 0;
    
    for(int i=0; i<n; i++){
        if(i%2 == 0 && S[i] == '1'){         //0 at even index
                ct_zero++;
        }
        else if(i%2 == 1 && S[i] == '0'){
            ct_zero++;
        }
        
        if(i%2 == 0 && S[i] == '0'){         //1 at even index
                ct_one++;
        }
        else if(i%2 == 1 && S[i] == '1'){
            ct_one++;
        }
    }
    return min(ct_one, ct_zero);
}