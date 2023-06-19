class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        int max=0;
        for(int i=0;i<gain.size();i++)
        {
            if(alt[i]+gain[i]>max)
                max=alt[i]+gain[i];
            alt.push_back(alt[i]+gain[i]);
        }
        return max;
    }
};