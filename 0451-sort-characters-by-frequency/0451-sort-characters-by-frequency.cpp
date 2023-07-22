// class Solution {
// public:
//     string frequencySort(string s) {
//         map<char,int> mpp;
//         for(int i=0;i<s.length();i++)
//         {
//             mpp[s[i]]++;
//         }
//         string str="";
        
//         int n=mpp.size();
//         while(n>0)
//         {
//             int max=INT_MIN;
//         char ch;
//         for(auto it=mpp.begin();it!=mpp.end();it++)
//         {
//            if(it->second!=0 && it->second > max)
//            {
//                ch=it->first;
//                max=it->second;
//            }
//         }
//             for(int i=0;i<max;i++)
//             {
//                 str=str+ch;
//             }
//             mpp[ch]=0;
//         }
        
//         return str;
        
//     }
// };
class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> vect;
        for(auto it: mp){
            vect.push_back({it.second,it.first});
        }
         sort(vect.begin(),vect.end());
         s=""; 
        for(int i=vect.size()-1;i>=0;i--){
            int count=vect[i].first;
            char c= vect[i].second;
            while(count > 0){
                s+= c;
                count--;
            }
        }
        return s;
    }
};