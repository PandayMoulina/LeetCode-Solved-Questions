class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xorr=0;
        if(n==1)
            return nums[0];
        else
        {
            for(int i=0;i<n;i++)
            {
                xorr=xorr^nums[i];
            }
        }
        return xorr;
    }
};