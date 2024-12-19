class Solution {
public:
    long long minimumSteps(string s) {
        long long steps = 0;
        int start;
        int j = s.length()-1;

        for(int i =0;i<s.length();i++)
        {
            if(s[i] == '1')
            {
                start = i;
                break;
            }
        }

        while(j>start)
        {
           if(s[j] == '0')
           {
            swap(s[start],s[j]);
            steps += j-start;
            start++;
            while(s[start] == '1' && start < j)
            {
                start++;
            }
           }
           j--;
        }

        return steps;
    }
};