class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        for(int i =0;i<words.size();i++)
        {
            bool issub = true;
            string x = words[i];
            for(int j=0;j<words.size();j++)
            {
                if(j != i)
                {
                    string y = words[j];

                    if(x.length() <= y.length())
                    {
                        //check substring
                        if(y.find(x) != string::npos)
                        {
                            ans.push_back(x);
                            break;
                        }
                    }else{
                        continue;
                    }
                }else{
                    continue;
                }
            }
        }

        return ans;
    }
};