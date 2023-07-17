class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // int ns=s.length();
        // int nt=t.length();
        // if(ns!=nt)
        //     return false;
        // unordered_map<char,int> mss;
        // unordered_map<char,int> mtt;
        // for(int i=0;i<ns;i++)
        // {
        //     mss[s[i]]++;
        // }
        // for(int i=0;i<nt;i++)
        // {
        //     mtt[t[i]]++;
        // }
        // int k;
        // for(auto it=mss.begin();it!=mss.end();it++)
        // {
        //     k=0;
        //     for(auto jt=mtt.begin();jt!=mtt.end();jt++)
        //     {
        //         if(it->second == jt->second)
        //         {
        //             jt->second=0;
        //             k=1;
        //             break;
        //         }
        //     }
        //     if(k==0)
        //         break;
        // }
        // if(k==1)
        //     return true;
        // else
        // return false;
        
        
       bool ans=true;
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char> m;
        unordered_map<char,char> m2;
        for(int i=0;i<s.size();i++){
            auto itr=m.find(s[i]);
            if(itr!=m.end()){
                if(itr->second!=t[i]){
                    ans=false;
                }
            }
            else{
                m[s[i]]=t[i];
            }
        }
        for(int i=0;i<s.size();i++){
            auto itr2=m2.find(t[i]);
            if(itr2!=m2.end()){
                if(itr2->second!=s[i]){
                    ans=false;
                }
            }
            else{
                m2[t[i]]=s[i];
            }
        }
        return ans;
    }
};