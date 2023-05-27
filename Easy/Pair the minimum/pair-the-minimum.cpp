//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
        int Pair_minimum(int *arr, int n)
    {
        sort(arr, arr+2*n);
        int l = 0;
        int h = 2*n-1;
        int res = INT_MIN;
        while(l < h){
            res = max(res, arr[l++] + arr[h--]);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{ 
    int T;
    cin>>T;
    
    while(T--)
    {   
        int n;
        cin>>n;
        
        int arr[2*n + 1];
        for(int i=0;i<2*n;i++)
            cin>>arr[i];
        Solution ob;
        cout<< ob.Pair_minimum(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends