#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

bool Paranthesis(std::string s) {
    std::stack<char> st;
    std::unordered_map<char, char> brackets = {
        {')', '('}, {'}', '{'}, {']', '['}
    };

    for (char c : s) {
        if (brackets.count(c)) {
            if (st.empty() || st.top() != brackets[c]) {
                return false;
            }
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

