class Solution {
public:
    int clumsy(int n) {
        stack<int>val;
        val.push(n);
        char op = '*';
        int ans = 1;

        for(int i = n-1;i>=1;i--)
        {
            if(op == '*')
            {
                //op
                ans = val.top();
                val.pop();
                ans *= i;
                val.push(ans);
                op = '/';
            }else if(op == '/')
            {
                ans = val.top();
                val.pop();
                ans /= i;
                val.push(ans);
                op = '+';
            }else if(op == '+')
            {
                val.push(i);
                op = '-';
            }
            else if(op == '-')
            {
                val.push(i*-1);
                op = '*';
            }
        }
        ans = 0;

        while(!val.empty())
        {
            ans += val.top();
            val.pop();
        }

        return ans;
    }
};