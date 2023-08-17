// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         int n=nums.size();
//         int start=0,end=0;
//         long long int sum=0,maxSum=0;
//         while(end<n)
//         {
//             if((end-start+1)<k)
//             {
//                 sum+=nums[end];
//                 end++;
//             }
//             else if((end-start+1)==k)
//             {
//                 sum+=nums[end];
//                bool check=CheckUnique(nums,start,end);
//                 if(check==true)
//                 {
//                     maxSum=max(sum,maxSum);
//                 }
//                 end++;
//                 sum-=nums[start];
//                 start++;
//             }
//         }
//         return maxSum;
//     }
        
//         bool CheckUnique(vector<int>& nums, int start, int end)
//         {
//             unordered_map<int,int> mpp;
//             for(int i=start;i<=end;i++)
//                 mpp[nums[i]]++;
//             for(auto it=mpp.begin();it!=mpp.end();it++)
//             {
//                 if(it->second>1)
//                     return false;
//             }
//             return true;
//         }
            
    
// };

class Solution {

	/*
		Time Complexity : O(N)
		Space Complexity : O(K)
	*/

public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long res = 0, currSum = 0;
        map<int, int> m1;
        
        for(int i=0; i<k; i++){
            m1[nums[i]]++;
            currSum += nums[i];
        }
        
        if(m1.size()==k && currSum > res){
            res = currSum;
        }
        
        for(int i=k; i<n; i++){
            int addIdx = i;
            int rmvIdx = i-k;
            
            // Updating the current sum
            currSum += nums[addIdx];
            currSum -= nums[rmvIdx];
            
            // Updating map
            if(m1[nums[rmvIdx]] == 1){
                m1.erase(nums[rmvIdx]);
            }else{
                m1[nums[rmvIdx]]--;
            }
            
            m1[nums[addIdx]]++;
            
            if(m1.size()==k && currSum > res){
                res = currSum;
            }
        }
        
        
        return res;
    }
};