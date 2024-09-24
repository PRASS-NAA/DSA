class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int redzone = 0;

        for(int i=0;i<s.length();i++)
        {
            if((s[i] != '|') && (s[i] == '*') && (redzone == 0))
            {
                count++;
            }else if((s[i] == '|') && (redzone == 0))
            {
                redzone = 1;
            }else if((s[i] == '|') && (redzone == 1))
            {
                redzone = 0;
            }
        }

        return count;
    }
};