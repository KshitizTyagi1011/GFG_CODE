//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>positive;
        vector<int>negative;
//Put positive elements in Separate positive vector
//and negative elements in Separate neagative vector
        for(int i=0; i<n; i++){
            if(arr[i] >= 0){
                positive.push_back(arr[i]);
            }
            else{
                negative.push_back(arr[i]);
            }
        }
        int po = 0;
        int no = 0;
        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                if(no >= positive.size()){
                arr[i] = negative[po];
                po++;
            }else{
                arr[i] = positive[no];
                no++;
            }
        }
        else{
            if(po >= negative.size()){
                arr[i] = positive[no];
                no++;
            }
            else{
                arr[i] = negative[po];
                po++;
            }
        }
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends