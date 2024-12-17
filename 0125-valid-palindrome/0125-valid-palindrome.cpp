class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";

        for(int i =0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                filtered += tolower(s[i]);
            }
        }

        int i =0;
        int j = filtered.length()-1;

        while(j>i)
        {
            if(filtered[i] != filtered[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};