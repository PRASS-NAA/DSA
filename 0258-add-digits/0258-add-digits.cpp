class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        int temp;

        if(num < 10)
        {
            return num;
        }

        while(num >= 10)
        {
            ans = 0;
            temp = num;
            while(temp > 0)
            {
                int r = temp%10;
                ans = ans+r;
                temp = temp/10;
            }
            num = ans;
        }

        return ans;
    }
};