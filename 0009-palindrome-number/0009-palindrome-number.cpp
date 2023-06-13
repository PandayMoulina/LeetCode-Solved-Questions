class Solution {
public:
int reve(int x)//to reverse the integer
    {
        int rev=0;
        while(x>0)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        
        return rev;
    }
    
    bool isPalindrome(int x) {
        int y,rev,len=0;
        int flag;
        if(x<0)
            return false;
        else if (x==0)
        return true;
        else{
        y=x;
        while(y>0){  //to find size of the input
            len++;
            y=y/10;
        }
        if(len<10)
            rev=reve(x);
        else
        {
            y=x;

            if((y%10)>2)
                return false;
            else if ((y%10)<2)
            goto jump;
            else if((y/=10) && ((y%10)>1))
               return false;
            else if ((y%10)<1)
                goto jump;
            else if((y/=10) && ((y%10)>4))
                return false;
            else if ((y%10)<4)
                goto jump;
                else if((y/=10) && ((y%10)>7))
                return false;
                else if ((y%10)<7)
                goto jump;
                else if((y/=10) && ((y%10)>4))
                return false;
                else if ((y%10)<4)
                goto jump;
            else if((y/=10) && ((y%10)>8))
                return false;
                else if ((y%10)<8)
                goto jump;
            else if((y/=10) && ((y%10)>3))
                return false;
                else if ((y%10)<3)
                goto jump;
                else if((y/=10) && ((y%10)>6))
                return false;
                else if ((y%10)<6)
                goto jump;
            else if((y/=10) && ((y%10)>4))
                return false;
                else if ((y%10)<4)
                goto jump;
            else if((y/=10) && ((y%10)>7))
                return 0;
            jump:
            rev=reve(x);
        }
        }  
            if(x==rev)
            return true;
        
        return false;
        
    }
    
};