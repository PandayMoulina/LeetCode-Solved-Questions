class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0, end=n-1;
        int middle,max=INT_MAX;     //here max means min
        while(start<=end)
        {
            middle=(start+end)/2;
            if(nums[middle]<max)
                max=nums[middle];
            if(middle!=(n-1) && (nums[middle+1]<nums[middle] || (nums[middle]>nums[start] && nums[start]>nums[end])))
            {
                start=middle+1;
            }
            else 
                end=middle-1;
        }
        return max;
    }
};