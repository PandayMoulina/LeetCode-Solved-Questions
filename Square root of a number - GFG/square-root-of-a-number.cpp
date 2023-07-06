//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int start=1;
        long long int end=x;
        long long int mid;
        if (x<0)
        return -1;
        if(x>0 && x<1)
        return 0;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(mid*mid==x || (mid*mid<x && (mid+1)*(mid+1)>x))
                return mid;
            if(mid*mid>x)
                end=mid;
            else
                start=mid;
        }
        return start;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends