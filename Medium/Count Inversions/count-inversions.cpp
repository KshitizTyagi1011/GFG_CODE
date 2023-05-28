//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    //Merge sort
    long long int merge(long long arr[], int l, int m, int r){
        long long left = l;
        long long right = m+1;
        long long cnt = 0;
        vector<long long>temp;
       
        while(left <= m && right <= r){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                cnt += (m-left+1);     //For count Inversion
                right++;
            }
        }
        while(left <= m){
             temp.push_back(arr[left]);
             left++;
        }
        while(right <= r){
             temp.push_back(arr[right]);
             right++;
        }
        
        for(long long i=l; i<=r; i++){
            arr[i] = temp[i-l];
        }
        return cnt;
    }
    long long int mergeSort(long long arr[], long long s, long long e){
        long long cnt = 0;
        if(s >= e) return cnt;
        //Finding the mid element
        long long mid = s+(e-s)/2;
        //Sort left
        cnt += mergeSort(arr, s, mid);
        //Sort right
        cnt += mergeSort(arr, mid+1, e);
        //merge the sorted arrays
        cnt += merge(arr, s, mid, e);
        return cnt;
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        long long s = 0;
        long long e = N-1;
        return mergeSort(arr, s, e);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends