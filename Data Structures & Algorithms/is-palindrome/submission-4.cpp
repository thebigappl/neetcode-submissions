class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (!isAlphanumeric(s[i])) {
                i++;
                continue;
            }
            if (!isAlphanumeric(s[j])) {
                j--;
                continue;
            }
            if (toupper(s[i]) != toupper(s[j])) return false;
            i++, j--;
        }
        return true;
    }

    bool isAlphanumeric(char c) {
        if (c >= 'a' && c <= 'z') return true;
        if (c >= 'A' && c <= 'Z') return true;
        if (c >= '0' && c <= '9') return true;
        return false;
    }
};
