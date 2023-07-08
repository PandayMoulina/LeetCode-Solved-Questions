class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
                max=nums[i];
        }
        int start=1;
        int end=max;
        int mid;
        int pos;
        while(start<=end)
        {
            mid=(start+end)/2;
            bool x=possible(nums,threshold,mid);
            if(x==1)
            {
                pos=mid;
                end=mid-1;
            }
                
            else
                start=mid+1;
        }
        return pos;
    }
    bool possible(vector<int>& nums, int threshold, int divisor)
    {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+ceil((double)nums[i]/(double)divisor);
        }
        if(sum<=threshold)
            return 1;
        else
            return 0;
    }
};