//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node()
        : val(0)
        , left(nullptr)
        , right(nullptr) {}
    Node(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr) {}
    Node(int x, Node *left, Node *right)
        : val(x)
        , left(left)
        , right(right) {}
};


// } Driver Code Ends
// User function Template for C++

class Solution {
    void inorder(Node* root, int& cnt){
        //Base case
        if(root == NULL) return;
        if(root != NULL || root->left != NULL || root->right != NULL) cnt++;
        
        inorder(root->left,cnt);
        inorder(root->right,cnt);
    }
    
  public:
    int countNodes(Node* root) {
        int cnt = 0;
        inorder(root,cnt);
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        Node *root = new Node(v[0]);

        int count = 0;
        queue<Node *> q;
        q.push(root);
        Node *cur = NULL;
        for (int i = 1; i < v.size(); i++) {
            Node *node = new Node(v[i]);
            if (count == 0) {
                cur = q.front();
                q.pop();
            }
            if (count == 0) {
                count++;
                cur->left = node;
            } else {
                count = 0;
                cur->right = node;
            }
            if (v[i] >= 0) {
                q.push(node);
            }
        }

        Solution obj;
        cout << obj.countNodes(root) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends