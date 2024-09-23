class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string finalans =s;

        for(int i =0;i<indices.size();i++)
        {
            finalans[indices[i]] = s[i];
        }

        return finalans;
    }
};