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
    int reverse(int x) {
        int y,rev,len=0;
        int flag;
        if(x>0)
            flag=1;
        else 
        {
            if(x>=(-2147483647)){
            x=x*(-1);//last negative number will cause problem,see how to resolve it
            flag=0;}
            else 
                return 0;
        }
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
                return 0;
            else if ((y%10)<2)
            goto jump;
            else if((y/=10) && ((y%10)>1))
               return 0;
            else if ((y%10)<1)
                goto jump;
            else if((y/=10) && ((y%10)>4))
                return 0;
            else if ((y%10)<4)
                goto jump;
                else if((y/=10) && ((y%10)>7))
                return 0;
                else if ((y%10)<7)
                goto jump;
                else if((y/=10) && ((y%10)>4))
                return 0;
                else if ((y%10)<4)
                goto jump;
            else if((y/=10) && ((y%10)>8))
                return 0;
                else if ((y%10)<8)
                goto jump;
            else if((y/=10) && ((y%10)>3))
                return 0;
                else if ((y%10)<3)
                goto jump;
                else if((y/=10) && ((y%10)>6))
                return 0;
                else if ((y%10)<6)
                goto jump;
            else if((y/=10) && ((y%10)>4))
                return 0;
                else if ((y%10)<4)
                goto jump;
            else if((y/=10) && ((y%10)>7))
                return 0;
            jump:
            rev=reve(x);
        }

        if (flag==0)
            rev=rev*(-1);
        return rev;
    }
};