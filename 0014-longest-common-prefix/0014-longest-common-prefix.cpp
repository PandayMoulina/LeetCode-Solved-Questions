class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=strs.size();
        string str="";
        for(int i=0;i<strs[0].size();i++)
        {
            int k=0;
            string s=strs[0];
            char ch=s[i];
            for(int j=1;j<l;j++)
            {
                string r=strs[j];
                if(ch==r[i])
                    k++;
                else break;
            }
            if(k==l-1)
            str=str+ch;
            else 
            break;
        }
        return str;
    }
};