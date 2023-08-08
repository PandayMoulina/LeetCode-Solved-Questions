class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=n/3;
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            if(it->second>maj)
                ans.push_back(it->first);
        }
        return ans;
    }
};