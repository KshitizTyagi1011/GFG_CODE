//{ Driver Code Starts
//Initial Template for Java


import java.io.*;
import java.util.*; 

class GFG{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t > 0){
        	int n = sc.nextInt();
        	int[] array = new int[n];
        	for(int i=0; i<n; i++)
        	{
        		array[i] = sc.nextInt();
        	}
        	int target = sc.nextInt();

            Solution ob = new Solution();
			System.out.println(ob.Search(array,target));
            t--;
        }
    } 
} 
// } Driver Code Ends


//User function Template for Java

class Solution 
{ 
    static int binary_search(int arr[], int s, int e, int k){
        int mid = s+(e-s)/2;
        while(s<=e){
            if(arr[mid] == k) return mid;
            else if(arr[mid] < k) s = mid+1;
            else e = mid-1;
            mid = s+(e-s)/2;
        }
        return -1;
    }
    
    static int get_pivot(int arr[], int s, int e){
        int mid = s+(e-s)/2;
        while(s<e){
            if(arr[mid] >= arr[0]) s = mid+1;
            else e = mid;
            
            mid = s+(e-s)/2;
        }
        return s;
    }
    static int Search(int array[], int target)
	{
	    int l = 0;
	    int h = array.length-1;
	    int pivot = get_pivot(array,l,h);
        //int n = A.size();
        if((target >= array[pivot]) && (target <= array[h])){
            return binary_search(array,pivot,h,target);
        }
        else{
             return binary_search(array,l,pivot-1,target);
        }
	}
} 

