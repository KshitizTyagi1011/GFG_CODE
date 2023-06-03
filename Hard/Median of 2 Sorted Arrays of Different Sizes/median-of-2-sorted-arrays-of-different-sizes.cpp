//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int index1 = 0 , index2 = 0;
        int n = array1.size();
        int m = array2.size();
        int mainArrayIndex = 0;
        vector<int>main(n+m, 0);
        while(index1 < n && index2 < m){
            if(array1[index1] <= array2[index2]){
                main[mainArrayIndex++]=array1[index1++];
            }
            else{
                main[mainArrayIndex++]=array2[index2++];
            }
        }
        while(index1 < n){
             main[mainArrayIndex++]=array1[index1++];
        }
        while(index2 < m){
             main[mainArrayIndex++]=array2[index2++];
        }
        
        int k = main.size();
        int mid = k/2;
        
        return k%2 == 0 ? (main[mid] + main[mid-1])/2.0 : main[mid];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends