// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n=nums.size();
//         if(k>=n)
//             return k;
//         int l=0,r=0;
//         int len;
//         int maxLen=INT_MIN;
//         int j=k;
//         while(r<=n)
//         {
//             if(r<n && nums[r]==1)
//                 r++;
//             else if(j>0)
//                 {
//                     r=r+1;
//                     j=j-1;
//                 }
                
//             else
//             {
//                 len=r-l;
//                 if(len>maxLen)
//                     maxLen=len;
//                 r=l+1;
//                 l=l+1;
//                 j=k;
//             }
            
            
//         }
//         if(maxLen==INT_MIN && r>l)
//         {
//             return r-l-1;
//         }
//         return maxLen;
//     }
// };


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int count = 0; 
        int maxSize = 0; 

        while (j < nums.size()) {
            if (nums[j] == 0) {
                count++;
            }
            while (count > k) {
                if (nums[i] == 0) {
                    count--;
                }
                i++;
            }
            maxSize = max(maxSize, j - i + 1);
            j++; 
        }
        return maxSize;
    }
};