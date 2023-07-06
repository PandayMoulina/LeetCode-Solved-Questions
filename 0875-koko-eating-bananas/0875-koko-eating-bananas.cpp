class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(piles[i]>max)
                max=piles[i];
        }
        int start=1, end=max; //range of eating bananas per hour
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            long long int req_time=reqTime(piles,mid);
            if(req_time<=h)
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
    
    //to calculate the time required to eat the whole pile by eating bph bananas/hour
    long long int reqTime(vector<int>& piles, int bph)
    {
        int n=piles.size();
        long long int req_time=0;
        for(int i=0;i<n;i++)
        {
            double time=(double)piles[i]/(double)bph;
            req_time+=ceil(time);
        }
        return req_time;
    }
};