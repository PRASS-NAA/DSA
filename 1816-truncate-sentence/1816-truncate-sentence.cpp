class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans ="";
        int cnt = 0;

        for(int i=0;i<s.length();i++)
        {
            if(cnt == k)
            {
                return ans;
            }
            
            if(s[i] == ' ')
            {
                cnt++;
                //ans+=s[i];
            }
            if(cnt != k)
            {
                ans+=s[i];
            }
            

        }

        return ans;
    }
};