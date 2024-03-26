class Solution {
public:
bool isValid(std::string s) {
    std::vector<char> stack;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push_back(c);
        } else {
            if (stack.empty()) return false; // No matching opening bracket found
            char top = stack.back();
            stack.pop_back();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false; // Mismatched closing bracket
            }
        }
    }
    return stack.empty(); // If stack is empty, all brackets are matched
}
};