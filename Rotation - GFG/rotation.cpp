//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    int start=0;
	    int end=n-1;
	    int middle,min=INT_MAX,rot;
	    while(start<=end)
	    {
	        middle=(start+end)/2;
	        if(nums[middle]<min)
	            {
	                min=nums[middle];
	                rot=middle;
	            }
	       if(middle!=(n-1) && nums[middle+1]<nums[middle] || (nums[start]<nums[middle] && nums[start]>nums[end]))
	       {
	           start=middle+1;
	       }
	       else
	            end=middle-1;
	    }
	    return rot;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends