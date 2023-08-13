//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    #define ll long long
    long long first_Index(vector<long long> v, long long x){
        ll s = 0;
        ll e = v.size()-1;
        ll res = -1;
        ll mid = s+(e-s)/2;
        while(s<=e){
            if(v[mid] == x){
                res = mid;
                e = mid-1;
            }
            else if(v[mid] < x) s = mid+1;
            else e = mid-1;
            
            mid = s+(e-s)/2;
        }
        return res;
    }
     long long second_Index(vector<long long> v, long long x){
        ll s = 0;
        ll e = v.size()-1;
        ll res = -1;
        ll mid = s+(e-s)/2;
        while(s<=e){
            if(v[mid] == x){
                res = mid;
                s = mid+1;
            }
            else if(v[mid] < x) s = mid+1;
            else e = mid-1;
            
            mid = s+(e-s)/2;
        }
        return res;
    }
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long,long> p;
        long long left = first_Index(v,x);
        long long right = second_Index(v,x);
        p.first = left;
        p.second = right;
        return p;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends