//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    private:
    priority_queue<int>maxpart;
    priority_queue<int, vector<int>, greater<int>>minpart;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        maxpart.push(x);
        minpart.push(maxpart.top());
        maxpart.pop();

        if(maxpart.size() < minpart.size()){
            maxpart.push(minpart.top());
            minpart.pop();
        }
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
          if(maxpart.size() > minpart.size()) //odd
            return maxpart.top();
        
        return((maxpart.top() + minpart.top())/2.0); //even
        
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends