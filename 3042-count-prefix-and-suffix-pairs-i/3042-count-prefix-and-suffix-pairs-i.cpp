class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2)
    {
        bool prefix = true;
        bool suffix = true;
        for(int k =0;k<str1.length();k++)
        {
            if(str2[k] != str1[k])
            {
                prefix = false;
                break;
            }
        }

        if(!prefix)
        {
            return false;
        }

        int k = 0;
        int start = str2.length()-str1.length();

        for(int i = start;i<str2.length();i++)
        {
            if(str1[k] != str2[i])
            {
                return false;
            }
            k++;
        }

        if(prefix && suffix)
        {
            return true;
        }else{
            return false;
        }
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;

        for(int i =0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                 if(isPrefixAndSuffix(words[i],words[j])){
                        cnt++;
                }
            }
        }

        return cnt;
    }
};