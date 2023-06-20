class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> avg;
            int lcnt,rcnt;
        lcnt=-1;
        rcnt=2*k;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(i-k<0 || i+k>n-1)
                avg.push_back(-1);
            else
            {
                
                if(lcnt==-1)
                {
                    for(int j=i-k;j<=i+k;j++)
                    {
                        sum=sum+nums[j];
                    }
                    lcnt++;
                    rcnt++;
                }
                else
                {
                   sum-=nums[lcnt];
                    sum+=nums[rcnt];
                    lcnt++;
                    rcnt++;
                }
                avg.push_back(sum/(2*k+1));
                    
            }
        }
        return avg;
    }
};