class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size(); //total number of flowers present
        long long int edge = m*1ll*k*1ll;
        if(edge>n)
            return -1;
        //to find the maximum and mininmum blooming day
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<n;i++) 
        {
            if(arr[i]>max)
                max=arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
        int start=min;
        int end=max;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            bool x=possible(arr,m,k,mid);
            if(x==1)
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
    bool possible(vector<int>& arr,int m, int k, int day)
    {
        int n=arr.size();
        int cnt=0;
        int b=0;//possible number of bouquets
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=day)
                cnt++;
            
            else
            {
               
                b=b+cnt/k;
                cnt=0;
            }
        }
        if(cnt!=0)
            b=b+cnt/k;
        if(b>=m)
            return 1;
        return 0;
    }
};