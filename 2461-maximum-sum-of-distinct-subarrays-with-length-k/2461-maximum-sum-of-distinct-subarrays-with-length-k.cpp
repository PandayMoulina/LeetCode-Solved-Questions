class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mpp;  
        int start=0,end=0;
        long long int sum=0,maxSum=0;
        while(end<n)
        {
            if((end-start+1)<k)
            {
                mpp[nums[end]]++;
                sum+=nums[end];
                end++;
            }
            else if((end-start+1)==k)
            {
                mpp[nums[end]]++;
               sum+=nums[end];
                if(mpp.size()==k)
                {
                    maxSum=max(sum,maxSum);
                    
                }
                if(mpp[nums[start]]==1)
                        mpp.erase(nums[start]);
                else 
                    mpp[nums[start]]--;
                end++;
                sum-=nums[start];
                start++;
            }
        }
        return maxSum;
    }
        
       
            
    
};










