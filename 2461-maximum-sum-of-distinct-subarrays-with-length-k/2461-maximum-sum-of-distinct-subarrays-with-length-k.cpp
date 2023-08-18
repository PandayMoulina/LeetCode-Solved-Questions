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










// class Solution {

// 	/*
// 		Time Complexity : O(N)
// 		Space Complexity : O(K)
// 	*/

// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         long long res = 0, currSum = 0;
//         map<int, int> m1;
        
//         for(int i=0; i<k; i++){
//             m1[nums[i]]++;
//             currSum += nums[i];
//         }
        
//         if(m1.size()==k && currSum > res){
//             res = currSum;
//         }
        
//         for(int i=k; i<n; i++){
//             int addIdx = i;
//             int rmvIdx = i-k;
            
//             // Updating the current sum
//             currSum += nums[addIdx];
//             currSum -= nums[rmvIdx];
            
//             // Updating map
//             if(m1[nums[rmvIdx]] == 1){
//                 m1.erase(nums[rmvIdx]);
//             }else{
//                 m1[nums[rmvIdx]]--;
//             }
            
//             m1[nums[addIdx]]++;
            
//             if(m1.size()==k && currSum > res){
//                 res = currSum;
//             }
//         }
        
        
//         return res;
//     }
// };