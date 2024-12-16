class Solution {
public:
    int reverseNum(int n)
    {
        int temp = n;
        int rev = 0;
        while(temp > 0)
        {
            int r = temp%10;
            rev = (rev*10)+r;
            temp = temp/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        if(num == 0)
        {
            return true;
        }
        if(num == 1)
        {
            return true;
        }else
        {
            if(num %10 == 0)
            {
                int temp = num;
                while(temp%10 == 0)
                {
                    temp = temp/10;
                }
                int revNum = reverseNum(temp);
                revNum = reverseNum(revNum);

                if(num == revNum)
                {
                    return true;
                }else{
                    return false;
                }
            }else{
                int revNum = reverseNum(num);
                revNum = reverseNum(revNum);

                if(num == revNum)
                {
                    return true;
                }else{
                    return false;
                }
            }
        }
    }
};