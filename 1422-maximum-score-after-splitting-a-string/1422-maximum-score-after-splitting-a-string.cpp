class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int max_score = INT_MIN;

        for(int i =0;i<s.length();i++)
        {
            for(int j=0;j<=i;j++)
            {
                //cal no of zeros (left half)
                if(s[j] == '0')
                {
                    score++;
                }
            }
            for(int k=i+1;k<s.length();k++)
            {
                //cal no of ones (right half)
                if(s[k] == '1')
                {
                    score++;
                }
            }
            if(score > max_score)
            {
                max_score = score;
            }

            score = 0;
        }

        return max_score;
    }
};