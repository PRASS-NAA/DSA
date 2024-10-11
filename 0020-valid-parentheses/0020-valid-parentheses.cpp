
class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> map;
        map[')'] = '(';
        map['}'] = '{';
        map[']'] = '[';

        for (char c : s) {
            if (map.count(c) == 0) {
                // It's an opening bracket
                stack.push(c);
            } else {
                // It's a closing bracket
                if (stack.empty() || stack.top() != map[c]) {
                    return false; // Mismatched or extra closing bracket
                }
                stack.pop(); // Valid match found
            }
        }

        return stack.empty(); // Return true if all opening brackets are matched
    }
};