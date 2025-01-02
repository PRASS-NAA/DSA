class Solution {
public:

    bool isthis(string word)
    {
        int count = 0;
        int n = word.size()-1;
        if((word[0] == 'a') || (word[0] == 'e')||(word[0] == 'i')||(word[0] == 'o')||(word[0] == 'u'))
        {
            count++; // 1 if starting is vowel
        }
        if((word[n] == 'a') || (word[n] == 'e')||(word[n] == 'i')||(word[n] == 'o')||(word[n] == 'u'))
        {
            count++;// 2 if ending is vowel
        }

        if(count == 2)
        {
            return true;
        }else{
            return false;
        }
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int cnt = 0;

        for(int i =0;i<queries.size();i++)
        {
            cnt = 0;
            int start = queries[i][0];
            int end = queries[i][1];

            //check in string

            for(int j = start;j<=end;j++)
            {
                if(isthis(words[j]))
                {
                    cnt++;
                }
            }

            ans.push_back(cnt);
        }

        return ans;
    }
};