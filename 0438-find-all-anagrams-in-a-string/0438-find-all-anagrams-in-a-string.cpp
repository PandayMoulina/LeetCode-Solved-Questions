class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int w=p.size(); //w:windowSize
        int n=s.size();
        vector<int> result;
        map<char,int> given;
        for(int i=0;i<p.size();i++)
        {
            given[p[i]]++;
        }
        map<char,int> mpp;
        int start=0,end=0;
        while(end<n)
        {
            if((end-start+1)<w)
            {
                mpp[s[end]]++;
                end++;
            }
            if((end-start+1)==w)
            {
                int nt=1;
                mpp[s[end]]++;
                if(mpp.size()==given.size())
                {
                    
                    for(auto it=mpp.begin(),jt=given.begin();it!=mpp.end() && jt!=given.end();it++,jt++)
                    {
                        if(it->first != jt->first || it->second !=jt->second)
                        {
                            nt=0;
                            break;
                        }
                    }
                    if(nt==1)
                        result.push_back(start);
                }
                if(mpp[s[start]]!=1)
                    mpp[s[start]]--;
                else
                    mpp.erase(s[start]);
                
                
                
                start++;
                end++;
            }
        }
        return result;
    }
};