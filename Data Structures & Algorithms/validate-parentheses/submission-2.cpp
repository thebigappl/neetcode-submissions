class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char& c : s) {
            if (c == ']' || c == '}' || c == ')') {
                if (st.empty()) return false;
                char top = st.top();
                if (!isMatching(top, c)) return false;
                st.pop();
            } else {
                st.push(c);
            }
        }
        if (st.empty()) return true;
        return false;
    }

    bool isMatching(char c1, char c2) {
        string s = "";
        s += c1;
        s += c2;
        if (s == "[]" || s == "()" || s == "{}") return true;
        return false;
    }
};
