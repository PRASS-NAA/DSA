
class Solution {
public:
    bool isValid(std::string s) {
        stack<char> ans;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                ans.push(s[i]);
            } else {
                // Check if the stack is empty BEFORE calling top()
                if (ans.empty()) {
                    return false;
                }

                // Match the corresponding opening bracket
                if (s[i] == ')' && ans.top() != '(') {
                    return false;
                }
                if (s[i] == ']' && ans.top() != '[') {
                    return false;
                }
                if (s[i] == '}' && ans.top() != '{') {
                    return false;
                }

                // If matched, pop the stack
                ans.pop();
            }
        }

        // If the stack is empty, all brackets were matched
        return ans.empty();
    }
};