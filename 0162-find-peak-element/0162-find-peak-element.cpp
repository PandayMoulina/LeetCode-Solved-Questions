class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(mid==0)
                return (nums[0]>nums[1] ? 0:1);
            if(mid==n-1)
                return (nums[n-1]>nums[n-2] ? n-1:n-2);
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            if(nums[mid]<nums[mid-1])
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
        
    }
};