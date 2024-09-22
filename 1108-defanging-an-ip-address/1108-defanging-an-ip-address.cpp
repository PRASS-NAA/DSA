class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        string brack = "[.]";
        for(int i =0;i<address.length();i++)
        {
            if(address[i] == '.')
            {
                ans.append(brack);
            }else{
                ans += address[i];
            }
        }

        return ans;
    }
};