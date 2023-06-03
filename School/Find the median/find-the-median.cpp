//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    int n = v.size();
		    int median, mid;
		    sort(v.begin(), v.end());
		    //for odd length
		    if(n%2 == 0){
		        mid = n/2;
		        median = (v[mid] + v[mid-1]) / 2;
		    }
		    else{
		        mid = n/2;
		        median = v[mid];
		    }
		    return median;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends