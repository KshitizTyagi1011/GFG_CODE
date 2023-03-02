//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    bool knows(vector<vector<int> >& M, int a, int b, int n){
        if(M[a][b]==1)
        return true;
        
        else
        return false;
        
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //step 1: Push all elements in stack
        stack<int>s;
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        //step 2: Get 2 elements and compare them
        while(s.size()>1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        //Step 3: Single element in Stack is potential celebrity
        int candidate = s.top();
        //row check
        int zeroCount = 0;
        for(int i=0 ; i<n; i++){
            if(M[candidate][i]==0)
            zeroCount++;
        }
        //All zeroes
        if(zeroCount != n)
        return -1;
        
        //col check
        int oneCount = 1;
        for(int i=0; i<n; i++){
            if(M[i][candidate]==1)
            oneCount++;
        }
        if(oneCount != n)
        return -1;
        
        return candidate;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends