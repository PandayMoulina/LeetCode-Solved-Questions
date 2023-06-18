class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> hashMap;
        vector<int> indices;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
                hashMap[nums[i]]=i;
            else
            {
                int k=target-nums[i];
                if(hashMap.find(k)!=hashMap.end())
                {
                    indices.push_back(i);
                    indices.push_back(hashMap[k]);
                    break;
                }
                else
                {
                    hashMap[nums[i]]=i;
                }
            }
        }
        return indices;
    }
};