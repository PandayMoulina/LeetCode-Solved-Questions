class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if (n==1)
            return nums[n-1];
        int start=0,end=n-1;
        int middle;
        while(start<=end)
        {
            middle=(start+end)/2;
            if(middle!=0 && nums[middle]==nums[middle-1])
            {
                if((end-middle)%2==0)
                    end=middle-2;
                else
                    start=middle+1;
            }
            else if(middle!=(n-1) && nums[middle]==nums[middle+1])
            {
                if((middle-start)%2==0)
                    start=middle+2;
                else
                    end=middle-1;
            }
            else
                return nums[middle];
        }
        return nums[middle];
    }
};