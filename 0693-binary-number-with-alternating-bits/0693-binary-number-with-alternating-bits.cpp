class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp = n;
        string ans = "";
        int initial = 0;
        int prevr;

        while(temp >=1)
        {
            int r = temp%2;
            if(initial == 0)
            {
                prevr = r;
                temp = temp/2;
                initial = 1;
            }else{
                if(prevr == r)
                {
                    return false;
                }
                prevr = r;
                temp= temp/2;
            }
        }

        return true;
    }
};