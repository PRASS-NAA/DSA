class Solution {
public:
    string toLowerCase(string s) {
       string ans = s;

       for(int i=0;i<s.length();i++)
       {
        if(s[i] >= 65 && s[i] <= 90)
        {
            ans[i] = (char)(s[i]+32);
        }else{
            ans[i] = s[i];
        }
       } 

       return ans;
    }
};