class Solution {
public:
    string interpret(string command) {
        string ans;

        for(int i =0;i<command.size();i++)
        {
            if(command[i] == 'G')
            {
                ans+= command[i];
            }else if(command[i] == '(' && command[i+1] == ')')
            {
                ans+='o';
            }else if((command[i] == '(') &&(command[i+1] == 'a')){
                ans+='a';
                ans+='l';
                i = i+3;
            }
        }

        return ans;
    }
};