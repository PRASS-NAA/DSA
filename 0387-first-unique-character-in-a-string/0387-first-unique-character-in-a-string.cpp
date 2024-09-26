class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.length();i++)
        {
            bool isit = true;

            for(int j = 0;j<s.length();j++)
            {
                if(i == j)
                {
                    continue;
                }
                
                if(s[i] == s[j])
                {
                    isit = false;
                    break;
                }
            }

            if(isit)
            {
                return i;
            }
        }

        return -1;
    }
};