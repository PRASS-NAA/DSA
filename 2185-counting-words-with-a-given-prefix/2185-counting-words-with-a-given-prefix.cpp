class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int prefc = pref.length();

        for(int i =0;i<words.size();i++)
        {
            bool flag = true;
            for(int j =0;j<prefc;j++)
            {
                string x = words[i];
                if(x[j] != pref[j])
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                count++;
            }
        }

        return count;
    }
};