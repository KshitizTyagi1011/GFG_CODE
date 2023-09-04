//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    void solve(stack<int>&s, int sizeOfStack, int ct){
        //base case
        if(ct == sizeOfStack/2){
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        //Recursive call
        solve(s,sizeOfStack,ct+1);
        s.push(num);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
         int ct = 0;
         solve(s,sizeOfStack,ct);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends