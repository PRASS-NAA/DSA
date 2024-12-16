class Solution {
public:
    int strStr(string haystack, string needle) {
        int isPresent = -1;
        for(int i =0;i<haystack.length();i++)
        {
            if(haystack[i] == needle[0])
            {
                //from here check every character
                int k = i;
                int start = k;
                bool isAns = true;
                for(int j=0;j<needle.length();j++)
                {
                    if(needle[j] != haystack[k])
                    {
                        isAns = false;
                        break;
                    }
                    k++;
                }

                if(isAns)
                {
                    return start;
                }
            }
        }

        return isPresent;
    }
};