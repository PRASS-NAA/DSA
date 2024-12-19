class Solution {
public:
    string reversePrefix(string word, char ch) {
        int endpos = -1;
        for(int i=0;i<word.length();i++)
        {
            if(word[i] == ch)
            {
                endpos = i;
                break;
            }
        }

        if(endpos == -1 || endpos == 0)
        {
            return word;
        }

        int howmanytime = (endpos +1)/2;
        int j = 0;
        int k = endpos;
        for(int i =1;i<=howmanytime;i++)
        {
            char temp = word[j];
            word[j] =  word[k];
            word[k] = temp;
            j++;
            k--;
        }

        return word;
    }
};