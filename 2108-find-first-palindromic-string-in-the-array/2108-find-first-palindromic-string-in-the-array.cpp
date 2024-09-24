class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans ="";

        for(int i =0;i<words.size();i++)
        {
            string x = words[i];
            bool ispalindrome = true;
            int len = x.length()/2;
            int y = x.length()-1;

            for(int j=0;j<=len;j++)
            {
                if(x[j] != x[y-j])
                {
                    ispalindrome = false;
                    break;
                }
            }

            if(ispalindrome)
            {
                return x;
            }
        }

        return "";
    }
};