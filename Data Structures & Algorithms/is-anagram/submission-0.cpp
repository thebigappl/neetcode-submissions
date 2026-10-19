class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;
        
        int n = s.length();
        int m = t.length();
        if (n != m) return false;
        for (int i = 0; i < n; i++) {
            char j = s[i];
            char k = t[i];
            if (ms.find(j) != ms.end()) {
                ms[j]++;
            } else {
                ms[j] = 0;
            }

            if (mt.find(k) != mt.end()) {
                mt[k]++;
            } else {
                mt[k] = 0;
            }
        }

        for (char& c : s) {
            if (mt.find(c) == mt.end() || mt[c] != ms[c]) return false;
        }
        return true;
    }
};
