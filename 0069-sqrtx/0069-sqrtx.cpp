class Solution {
public:
    int mySqrt(int x) {
        long int num = 0;
        for(long int i =1;i<=(x/2)+1;i++)
        {
            num = i*i;

            if(num > x)
            {
                num = i-1;
                return num;
            }
            else if(num == x)
            {
                return i;
            }
        }
        return num;
    }
};