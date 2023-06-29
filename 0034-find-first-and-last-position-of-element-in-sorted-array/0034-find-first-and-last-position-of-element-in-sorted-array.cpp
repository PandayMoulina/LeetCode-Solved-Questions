class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,e=-1;
        vector<int> x;
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        if(l<nums.size() && nums[l]==target)
            s=l;
        if(nums.size()==1 && u!=0 && nums[u-1]==target)
            e=u-1;
        else if(u<=nums.size() && u!=0 && nums[u-1]==target)
            e=u-1;
        else e=-1;
        x.push_back(s);
        x.push_back(e);
        return x;
    }
};