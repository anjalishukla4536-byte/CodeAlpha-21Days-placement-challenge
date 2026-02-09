class Solution {
public:
    unordered_map<string, bool> memo;

    bool isScramble(string s1, string s2) {
        // Base case
        if (s1 == s2) return true;
        if (s1.length() != s2.length()) return false;

        string key = s1 + "_" + s2;
        if (memo.find(key) != memo.end())
            return memo[key];

        // Pruning: check character frequency
        string a = s1, b = s2;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a != b) {
            memo[key] = false;
            return false;
        }

        int n = s1.length();

        for (int i = 1; i < n; i++) {
            // No swap case
            if (isScramble(s1.substr(0, i), s2.substr(0, i)) &&
                isScramble(s1.substr(i), s2.substr(i))) {
                return memo[key] = true;
            }

            // Swap case
            if (isScramble(s1.substr(0, i), s2.substr(n - i)) &&
                isScramble(s1.substr(i), s2.substr(0, n - i))) {
                return memo[key] = true;
            }
        }

        memo[key] = false;
        return false;
    }
};
