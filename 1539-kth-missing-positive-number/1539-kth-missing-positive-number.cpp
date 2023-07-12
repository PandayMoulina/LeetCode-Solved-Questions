class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]-(mid+1)<k)
                start=mid+1;
            else
                end=mid-1;
        }
       
        return k+end+1;
    }
};