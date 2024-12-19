class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mpp;
        int evencount = 0;

        int odd = 0;
        int first = 1;

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
                if(first == 1)
                {
                    odd+= it.second;
                    first = 0;
                }else{
                    odd = odd + (it.second-1);
                }
            }
        }

        return evencount+odd;
    }
};