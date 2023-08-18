class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res;
        int start=0,end=0;
        map<int,int> mpp;
        while(end<n)
        {
            if((end-start+1)<k)
            {
                mpp[nums[end]]++;
                end++;
            }
            if((end-start+1)==k)
            {
                mpp[nums[end]]++;
                auto it=mpp.rbegin();
                res.push_back(it->first);
                if(mpp[nums[start]]==1)
                    mpp.erase(nums[start]);
                else
                    mpp[nums[start]]--;
                start++;
                end++;
            }
        }
        return res;
    }
};