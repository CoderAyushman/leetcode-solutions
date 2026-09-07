class Solution {
public:
    int countRotations(std::string s, int k) {
        int n = s.length();
        string doubled = s + s;
        int ans = 0;

        for (int p = 0; p < n; ++p) {
            int score = 0;
            for (int i = 0; i < n - 1; ++i) {
                if (doubled[p + i] == doubled[p + i + 1]) {
                    score++;
                }
            }
            if (score == k) {
                ans++;
            }
        }

        return ans;
    }
};