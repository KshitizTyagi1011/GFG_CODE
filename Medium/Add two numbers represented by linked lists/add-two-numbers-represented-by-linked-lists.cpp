//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* temp = NULL;
        
        while(curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val){
        Node* temp = new Node(val);
        if(head == NULL){  //Empty list
            head = temp;
            tail = temp;
            return;
        }
        else{   //Non-empty list
            tail->next = temp;
            tail = temp;
        }
        
    }
    
    struct Node* add(struct Node* l1, struct Node* l2){
        Node* headans = NULL;
        Node* tailans = NULL;
        
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0){
            int val1 = 0;
            if(l1 != NULL) val1 = l1->data;
        
            int val2 = 0;
            if(l2 != NULL) val2 = l2->data;
        
            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            insertAtTail(headans, tailans, digit);
            carry = sum / 10;
            
            if(l1 != NULL) l1 = l1->next;
            
            if(l2 != NULL) l2 = l2->next;
            
        }
        return headans;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* l1 = first;
        Node* l2 = second;
        
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        Node* ans = add(l1,l2);
        
        ans = reverse(ans);
        return ans;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends