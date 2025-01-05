class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        for(int i=0;i<shifts.size();i++)
        {
            int direction = shifts[i][2]; //direction
            int start = shifts[i][0];
            int end = shifts[i][1];

            if(direction == 0) //shifting backward
            {
                for(int j=start;j<=end;j++)
                {
                    if(s[j] == 'a')
                    {
                        s[j] = 'z';
                    }else{
                        s[j] = s[j]-1;
                    }
                    
                }
            }else if(direction == 1) //shifting forward
            {
                for(int k=start;k<=end;k++)
                {
                    if(s[k] == 'z')
                    {
                        s[k] = 'a';
                    }else{
                        s[k] = s[k]+1;
                    }
                    
                }
            } 
        }

        return s;
    }
};