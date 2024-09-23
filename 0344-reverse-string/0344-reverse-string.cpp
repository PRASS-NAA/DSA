class Solution {
public:
    void reverseString(vector<char>& s) {
        int x = s.size()-1;
        int max = x/2;
        int temp;
        for(int i =0;i<=max;i++)
        {
            temp = s[i];
            s[i] = s[x-i];
            s[x-i] = temp;
        }
    }
};