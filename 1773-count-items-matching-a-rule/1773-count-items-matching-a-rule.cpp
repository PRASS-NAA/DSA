class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int whatocheck;

        if(ruleKey == "type")
        {
            whatocheck = 0;
        }else if(ruleKey == "color")
        {
            whatocheck = 1;
        }else{
            whatocheck = 2;
        }

        for(int i =0;i<items.size();i++)
        {
            if(whatocheck == 0)
            {
                if(items[i][0] == ruleValue)
                {
                    count++;
                }
            }else if(whatocheck == 1)
            {
                if(items[i][1] == ruleValue)
                {
                    count++;
                }
            }else{
                if(items[i][2] == ruleValue)
                {
                    count++;
                }
            }
        }

        return count;
    }
};