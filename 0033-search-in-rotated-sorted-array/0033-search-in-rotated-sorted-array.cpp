class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0, end=n-1;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else
            {
                if(n!=1)
                {
                    if(nums[start]<nums[mid])
                    {
                        if(mid!=0 && nums[start]<=target && nums[mid-1]>=target)
                        {
                            end=mid-1;
                        }
                    else 
                        start=mid+1;
                        
                    }
                else
                {
                    if(mid!=n-1 && nums[mid+1]<=target && nums[end]>=target)
                        {
                            start=mid+1;
                        }
                    else 
                        end=mid-1;
                }
                }
                else
                    return -1;
            }
        }
        return -1;
    }
//     int BS(vector<int>& nums,int start, int end, int target)
//     {
//         int x=-1;
//         int mid;
//         if(start<=end)
//         {
//             mid=(start+end)/2;
//             if(nums[mid]==target)
//                 return mid;
//             else
//             {
//                 if(mid!=0 && nums[mid-1]<nums[mid])
//                 {
//                     int x=BS(nums,start,mid-1,target);
//                 }
                
//                 if(x==-1 && mid!=nums.size()-1 && nums[mid+1]<nums[mid])
//                 {
//                     int x=BS(nums,mid+1,end,target);
//                 }
//             }
//         }
//         return x;
//     }
};