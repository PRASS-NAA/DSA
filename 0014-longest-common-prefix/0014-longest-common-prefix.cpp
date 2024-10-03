class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string x = strs[0];
        string ansstr = "";
        bool ans = false;
        int size_z;
        for(int i =1;i<strs.size();i++)
        {
            string y = strs[i];

            int size_x = x.length();
            int size_y = y.length();

            if(size_x < size_y)
            {
                size_z = size_x;
            }else
            {
                size_z = size_y;
            }


            for(int j =0;j<size_z;j++)
            {
                if(y[j] == x[j])
                {
                    ans = true;
                    ansstr += y[j];
                }
                else
                {
                    break;
                }
            }
            x = ansstr;
            ansstr = "";
        }

       if(ans)
       {
        return x;
       }else
       {
        return "";
       }
    }
};