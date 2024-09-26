class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int cnt = 0;
        int i =0;
        string x="";

        while(i< s.length())
        {
            if(cnt != k)
            {
                x+=s[i];
                
                cnt++;
            }
            if(cnt == k){
                ans.push_back(x);
               
                cnt = 0;
                x = "";
            }
            i++;
        }

        if(cnt == 0)
        {
            return ans;
        }else
        {
            int diff = k-cnt;

            for(int i =1;i<=diff;i++)
            {
                x+= fill;
            }

            ans.push_back(x);

            return ans;
        }

        //wommala
    }
};