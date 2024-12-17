class Solution {
public:
    char repeatedCharacter(string s) {
       int gloaballeast = INT_MAX;
       int presentindex = INT_MAX;
       char ans;
       int j;

       for(int i =0;i<s.length();i++)
       {
            j = s.length()-1;
            while(j>i)
            {
                if(s[i] == s[j])
                {
                    presentindex = j;
                }
                j--;
            }

            if(presentindex < gloaballeast)
            {
                gloaballeast = presentindex;
                ans = s[i];
            }
       }
       return ans; 
    }
};