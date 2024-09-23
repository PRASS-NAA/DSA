class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i] > s[j])
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }

        for(int i=0;i<t.length();i++)
        {
            for(int j=i+1;j<t.length();j++)
            {
                if(t[i] > t[j])
                {
                    char temp = t[i];
                    t[i] = t[j];
                    t[j] = temp;
                }
            }
        }

        for(int i=0;i<t.length();i++)
        {
            if(s[i] != t[i])
            {
                return t[i];
            }
        }

        return '1';
    }
};