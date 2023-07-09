class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sumWeights=0;
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sumWeights+=weights[i];
            if(weights[i]>max)
                max=weights[i];
        }
        int start=max;
        int end=sumWeights;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            bool x=possible(weights,days,mid);
            if(x==1)
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
    bool possible(vector<int>& weights, int days, int lw)
    {
        int n=weights.size();
        int sum=0;
        int reqDay=0;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
            if(sum>=lw)
            {
                reqDay++;
                if(sum>lw)
                    sum=weights[i];
                else
                    sum=0;
            }
        }
        if(sum>0)
            reqDay++;
        if(reqDay<=days)
            return 1;
        else
            return 0;
    }
};