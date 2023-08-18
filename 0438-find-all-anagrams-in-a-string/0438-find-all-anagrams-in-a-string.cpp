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
       // map<char,int> mpp;
        int start=0,end=0;
        while(end<n)
        {
            if((end-start+1)<w)
            {
                if(given.find(s[end])!=given.end())
                    ((given.find(s[end]))->second)--;
                end++;
            }
            if((end-start+1)==w)
            {
                int nt=1;
                if(given.find(s[end])!=given.end())
                    ((given.find(s[end]))->second)--;
                for(auto it=given.begin();it!=given.end();it++)
                {
                    if(it->second!=0)
                        nt=0;
                }   
                if(nt==1)
                {
                    result.push_back(start);
                }
                if(given.find(s[start])!=given.end())
                        given[s[start]]++;
                
                    
                    
//                 {
                    
//                     for(auto it=mpp.begin(),jt=given.begin();it!=mpp.end() && jt!=given.end();it++,jt++)
//                     {
//                         if(it->first != jt->first || it->second !=jt->second)
//                         {
//                             nt=0;
//                             break;
//                         }
//                     }
                    
//                 }
//                 if(mpp[s[start]]!=1)
//                     mpp[s[start]]--;
//                 else
//                     mpp.erase(s[start]);
                
                
                
                start++;
                end++;
            }
        }
        return result;
    }
};