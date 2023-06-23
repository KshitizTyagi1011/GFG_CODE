//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    vector<vector<int>> ans;
    void check(int i,int j, vector<vector<char> > &mat, string& t,int ind,int a,int b,int d){
        if(!ans.empty() && ans.back()[0] == a && ans.back()[1] == b) return;
        if(j != mat[0].size() && i != mat.size() && j >= 0 && i >= 0 && mat[i][j] == t[ind]){
            char temp = mat[i][j];
            mat[i][j] = 0;
            if(++ind == t.size()){
                ans.push_back({a,b});
            }
            else{
                if(d == 1 || !d)
                check(i,j+1,mat,t,ind,a,b,1);
                if(d == 2 || !d)
                check(i+1,j+1,mat,t,ind,a,b,2);
                if(d == 3 || !d)
                check(i+1,j,mat,t,ind,a,b,3);
                if(d == 4 || !d)
                check(i+1,j-1,mat,t,ind,a,b,4);
                if(d == 5 || !d)
                check(i,j-1,mat,t,ind,a,b,5);
                if(d == 6 || !d)
                check(i-1,j-1,mat,t,ind,a,b,6);
                if(d == 7 || !d)
                check(i-1,j,mat,t,ind,a,b,7);
                if(d == 8 || !d)
                check(i-1,j+1,mat,t,ind,a,b,8);
            }
            //backtrack
            mat[i][j] = temp;
        }
    }
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                check(i,j,grid,word,0,i,j,0);
            }
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends