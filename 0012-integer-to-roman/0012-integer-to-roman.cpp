class Solution {
public:
    string intToRoman(int num) {
        string roman = "IVXLCDM";
        string str;
        int i = 0;
        while (num)
        {
            int r = num%10;
            if (r < 4)
            {
                for (int j = 0; j < r; j++)
                {
                    str+=roman[i*2];
                }
            }
            else if (r==4)
            {
                str+=roman[i*2+1];str+=roman[i*2];
            }
            else if (r<9)
            {
                for (int j = 0; j < r-5; j++)
                {
                    str+=roman[i*2];
                }
                str+=roman[i*2+1];
            }
            else {str+=roman[i*2+2];str+=roman[i*2];}
            num/=10;
            i++;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};