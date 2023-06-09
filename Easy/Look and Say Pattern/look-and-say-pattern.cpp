//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
         //base case
        if(n == 1) return "1";
        if(n == 2) return "11";
        string str = "11";
        
        //loop from 3 --> n
        for(int i=3; i<=n; i++){
            string temp = "";
            str = str + "&";  //add a delimeter at the end
            int cnt = 1;
            //loop from 1 to delimeter in the string
            for(int j=1; j<str.size(); j++){
                if(str[j] != str[j-1]){
                    temp = temp + to_string(cnt);
                    temp = temp + str[j-1];
                    cnt = 1;    //reset counter to 1
                }
                else cnt++;
            }
            str = temp;
        }
        return str;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends