class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string answord1;
        string answord2;

        for(int i =0;i<word1.size();i++)
        {
            string x = word1[i];
            answord1+=x;
        }
        string x="";

        for(int i =0;i<word2.size();i++)
        {
            x = word2[i];
            answord2+=x;
        }

        for(int i =0;i<answord2.length();i++)
        {
            if(answord1[i] != answord2[i])
            {
                return false;
            }
        }
        return true;
    }
};