//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int Binary_search(int arr[], int s, int e, int key){
          int mid = s+(e-s)/2;
          while(s<=e){
              if(arr[mid] == key) return mid;
              else if(arr[mid] < key) s = mid + 1;
              else e = mid - 1;
              mid = s+(e-s)/2;
          }
        return -1;
    }
    int get_pivot(int arr[], int s, int e){
        int mid = s+(e-s)/2;
        while(s < e){
            if(arr[mid] >= arr[0]) s = mid + 1;
            else e = mid;
            
            mid = s+(e-s)/2;
        }
        return s;
    }
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int pivot = get_pivot(A,l,h);
        if(key >= A[pivot] && key <= A[h]){    //pivot or last index ke beech mai
            return Binary_search(A,pivot,h,key);
        }
        else{
            return Binary_search(A,l,pivot-1,key);  //start or pivot ke beech mai
        }
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends