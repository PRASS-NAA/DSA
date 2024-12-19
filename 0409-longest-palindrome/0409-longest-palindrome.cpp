class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mpp;
        int evencount = 0;
        int maxodd = 0;
        int odd = 0;

        for(int i =0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }

        for(auto it:mpp)
        {
            if(it.second % 2 ==0)
            {
                evencount += it.second;
            }else{
                if(it.second > maxodd)
                {
                    maxodd = it.second;
                }else{
                    odd += it.second-1;
                }
            }
        }

        return evencount+maxodd+odd;
    }
};